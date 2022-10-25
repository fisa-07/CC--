#include<stdio.h>
struct student{
	int roll;
	char name[20];
	float marks;
}student[50];
int main(){
	int n,i;
	printf("Enter Number of Students:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
    	printf("Enter Name:");
    	fflush(stdin);
    	gets(student[i].name);
    	printf("Enter Roll no:");
    	scanf("%d",&student[i].roll);
    	printf("Enter Marks:");
    	scanf("%f",&student[i].marks);
    }
    for(i=0;i<n;i++){
    	if(student[i].marks>=75){
    		puts(student[i].name);
		}
    }
    
	return 0;
}
