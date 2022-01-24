#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows1, columns1;
    FILE * file1;
    file1=fopen("matrix.txt", "r");
    if(file1==NULL)
    {
        printf("The file matrix.txt cannot be open\n");
    }
    else
    {
        printf("Successfuly opened the file\n");
    }
    fscanf(file1,  "%d %d", &rows1, &columns1 );
    printf("%d %d\n", rows1, columns1);
    int arr1[rows1][columns1];
    for(int i=0; i<rows1; i++)
    {
         for(int j=0; j<columns1; j++)
         {
             fscanf(file1,"%d", &arr1[i][j]);
         }
    }
    FILE * file2;
    file2=fopen("matrix2.txt", "r");
    if(file2==NULL)
    {
        printf("The file matrix2.txt cannot be open\n");
    }
    else
    {
        printf("Successfuly opened the file\n");
    }
    int rows2, columns2;

    fscanf(file2,"%d %d", &rows2, &columns2 );
    printf("%d %d\n", rows2, columns2);
    if (rows2!=rows1 || columns2 != columns1)
    {

        printf("These 2 matrices are not compatible to add\n");
        return 3;
    }
    else
    {
        printf("Continue\n");
    }

    int arr2[rows2][columns2];
    int arr3[rows2][columns2];
    printf("Sum of matrices: \n");
    for(int i=0; i<rows2; i++)
    {

         for(int j=0; j<columns2; j++)
         {

             fscanf(file2,"%d", &arr2[i][j]);
             arr3[i][j]=arr1[i][j]+arr2[i][j];
             printf("%5d", arr3[i][j]);
         }
         printf("\n");
    }
    printf("Difference of matrices: \n");
    for(int i=0; i<rows2; i++)
    {

         for(int j=0; j<columns2; j++)
         {

             arr3[i][j]=arr1[i][j]-arr2[i][j];
             printf("%5d", arr3[i][j]);
         }
         printf("\n");
    }




    return 0;
}

