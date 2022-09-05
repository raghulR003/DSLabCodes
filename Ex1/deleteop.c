#include <stdio.h>
//Assuming we are deleting a singe element from the array
int main()
{
    int num;
    printf("Enter the number of elements: ");
    scanf("%i",&num);
    //Creating an array now
    int array1[num];
    printf("Enter the elements one by one now: \n");
    for(int j=0;j<num;j++)
    {
        scanf("%i",&array1[j]);
    }
    //Array declared
    int index=num-1; //index variable has the index of the last element in the array
    printf("Enter the position of the element to be deleted: ");
    int del_num;
    scanf("%i",&del_num);
    if(del_num==1){
        //element present at start
        for(int k=1;k<num;k++){
            array1[k-1]=array1[k];
        }
        printf("The new array is: \n");
        for(int k=0;k<num-1;k++){
            printf("%i ",array1[k]);
        }
    }
    else if(del_num==num){
        printf("The new array is: \n");
        for(int k=0;k<num-1;k++){
            printf("%i ",array1[k]);
        }
    }
    else{
        //It means that the element is present somewhere in the middle
        for(int i=del_num-1;i<num-1;i++){
            array1[i]=array1[i+1];
        }
        printf("The new array is: \n");
        for(int k=0;k<num-1;k++){
            printf("%i ",array1[k]);
        }
    }
}