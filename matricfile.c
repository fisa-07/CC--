#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j;
    int mat1[3][3], mat2[3][3], summat[3][3];
    FILE *fp1, *fp2;
    fp1 = fopen("Roll40_Matrixinput.txt", "r");
    if(fp1 == NULL){
        printf("\nERROR");
        exit(1);
    }
    fp2 = fopen("Roll40_Matrixoutput.txt", "w");
    if(fp2 == NULL){
        printf("\nERROR");
        exit(1);
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            fscanf(fp1, "%d", &mat1[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            fscanf(fp1, "%d", &mat2[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            summat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    fprintf(fp2, "Sum of two matrices : \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            fprintf(fp2, "%d\t", summat[i][j]);
        }
        fprintf(fp2, "\n");
    }
    printf("Added two matrices");
    fclose(fp1);
    fclose(fp2);

    return 0;
}
