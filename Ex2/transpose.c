#include <stdio.h>
#include <stdlib.h>

void transpose(int ** array,int rows, int cols){
    int i,j;
    int arr[rows][cols];
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            arr[i][j]=*(array + j *cols + i)
            printf("%i ",&arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    printf("Enter the number of rows and columns: \n");
    int r,c;
    scanf("%i",&r);
    scanf("%i",&c);
    if(r==c){
        //Matrix is valid
        int ** ini_arr=(int**)malloc(r*sizeof(int*));
        for(int i=0;i<r;i++){
            ini_arr[i]=(int*)malloc(c*sizeof(int));
        }
        int temp=0;
        //Array is declared
        printf("Enter the matrix elements one by one: \n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                scanf("%i",&ini_arr[i][j]);
            }
        } //Array is initialized
        printf("The transpose of the matrix is: \n");
        transpose(ini_arr,r,c);
    }
    else{
        printf("Invalid matrix");
    }
}