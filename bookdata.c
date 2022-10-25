                                   //BOOK STORE DATABASE//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
struct book{
          char name[50];
          int no;
          float cost;
} book;
void insert(FILE *fp){
          fseek(fp,0,2);
          printf("Enter book name  :  ");
          fflush(stdin);
          gets(book.name);
          printf("Enter number of copies  :  ");
          scanf("%d",&book.no);
          printf("Enter cost of book  :  ");
          scanf("%f",&book.cost);
          fwrite(&book,sizeof(book),1,fp);
}
void del(FILE *fp){
          FILE *fptmp;
          char name[20];
          printf("Enter the name of th book to be deleted from database  :  ");
          scanf("%s",name);
          if(search(fp,name)==0)
                    return;
          fptmp=fopen("tempfile.dat","wb");
          rewind(fp);
          while(fread(&book,sizeof(book),1,fp)==1){
                    if(strcmp(name,book.name)!=0)
                              fwrite(&book,sizeof(book),1,fptmp);
          }
          fclose(fp);
          fclose(fptmp);
          remove("books.dat");
          rename("tempfile.dat","books.dat");
          printf("\nRecord deleted..........\n\n");
          fp=fopen("books.dat","rb+");
}
void modify(FILE *fp){
          char name[50];
          long size=sizeof(book);
          printf("Enter the name of the book to be modified  :  ");
          scanf("%s",name);
          if(search(fp,name)==1){
                    printf("Enter new data-->\n\n");
                    printf("Enter book name  :  ");
                    scanf("%s",book.name);
                    printf("Enter number of copies  :  ");
                    scanf("%d",&book.no);
                    printf("Enter cost of book  :  ");
                    scanf("%f",&book.cost);
                    fseek(fp,-size,1);
                    fwrite(&book,sizeof(book),1,fp);
                    printf("\nRecord successfully modified\n\n");
          }
}
void booksold(FILE *fp){
          char name[50];
          long size=sizeof(book);
          printf("Enter the name of the book to be sold  :  ");
          scanf("%s",name);
          if(search(fp,name)==1)
          {
                    if(book.no>0){
                              book.no--;
                              fseek(fp,-size,1);
                              fwrite(&book,sizeof(book),1,fp);
                              printf("One book sold\n");
                              printf("Now number of copies = %d\n",book.no);
                    }
                    else
                    printf("Book is out of stock\n\n");
          }
}
void display(FILE *fp){
          char name[50];
          printf("Enter the name of the book  :  ");
          scanf("%s",name);
          search(fp,name);
          printf("\nName\t%s\n",book.name);
          printf("Copies\t%d\n\n",book.no);
          printf("Cost\t%f\n\n",book.cost);
}
int search(FILE *fp,char *name){
          unsigned flag=0;
          rewind(fp);

          while(fread(&book,sizeof(book),1,fp)==1){
                    if(strcmp(name,book.name)==0){
                              flag=1;
                              break;
                    }
          }
          if(flag==0)
                    printf("\nName not found in file\n\n");
          return flag;
}
void list(FILE *fp){
          rewind(fp);
          printf("\nNAME\tCOPIES\t\tCOST\n\n");
          while(fread(&book,sizeof(book),1,fp)==1){
                    printf("%s\t",book.name);
                    printf("%d\t\t",book.no);
                    printf("%f\n",book.cost);
          }
          printf("\n");
}
int main()
{
          int choice;
          FILE *fp;
          fp=fopen("books.dat","rb+");
          if(fp==NULL){
                    fp=fopen("books.dat","wb+");
                    if(fp==NULL){
                              puts("ERROR");
                              exit(1);
                    }
          }

while(1){
          printf("1.Insert a new record\n");
          printf("2.Delete a record\n");
          printf("3.Display record of a book\n");
          printf("4.Modify an existing records\n");
          printf("5.List all records\n");
          printf("6.Book sold\n");
          printf("7.Exit\n");
          printf("Enter your choice  :  ");
          scanf("%d",&choice);

          switch(choice){
          case 1:
                    insert(fp);
                    break;
          case 2:
                    del(fp);
                    break;
          case 3:
                    display(fp);
                    break;
          case 4:
                    modify(fp);
                    break;
          case 5:
                    list(fp);
                    break;
          case 6:
                    booksold(fp);
                    break;
          case 7:
                    fclose(fp);
                    exit(1);
          default :
                    printf("Wrong choice\n");
          }

}

}
