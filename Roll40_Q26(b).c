//b) Write a C Program to transpose a given Matrix.
#include <stdio.h>
int main(){
   int m,n,i,j,mat[10][10],tran[10][10];
   printf("Enter rows and columns: ");
   scanf("%d%d",&m,&n);
   printf("Enter elements:\n");
   for(i=0;i<m;i++)
      for(j=0;j<n;j++)
         scanf("%d",&mat[i][j]);
   for(i=0;i<m;i++)
      for(j=0;j<n;j++)
         tran[j][i]=mat[i][j];
   printf("Transpose of the matrix:\n");
   for(i=0;i<n;i++){
      for(j=0;j<m;j++)
         printf("%d\t", tran[i][j]);
      printf("\n");
   }
   return 0;
}