#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int array_normal(int *arr,int rows,int columns){
    int sum=0,val=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            val=*(arr+i*columns+j);
            val=val*val;
            sum+=val;
        }
    }
    return sum;
}

int array_trace(int *arr,int rows,int columns){
    int sum=0,val=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(i==j)
            {
            val=*(arr+i*columns+j);
            sum+=val;
            }
        }
    }
    return sum;
}

int main()
{
    int rows,columns;
    printf("Enter the number of rows and columns: \n");
    scanf("%i%i",&rows,&columns);
    if(rows==columns){
    int * arr= (int *)malloc(rows*columns*sizeof(int)); //Allocates bytes to the array
    int i,j,temp;
    printf("Enter the elements one by one: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%i",&temp);
            *(arr+i*columns+j)=temp;
        }
    }
    printf("\nThe trace of the matrix is: \n");
    int sum1= array_trace(arr,rows,columns);
    printf("%i",sum1);
    printf("\nThe normal of the matrix is: \n");
    int sum= array_normal(arr,rows,columns);
    printf("%f",sqrt(sum));
    }
    else{
        printf("Invalid matrix entered!");
    }
}