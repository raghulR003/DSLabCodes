#include <stdio.h>
//Assuming we are deleting a singe element from the array
int main()
{
    int num;
    printf("Enter the number of elements: ");
    scanf("%i",&num);
    //Creating an array now
    int array1[num+1];
    printf("Enter the elements one by one now: \n");
    for(int j=0;j<num;j++)
    {
        scanf("%i",&array1[j]);
    }
    //Array declared
    int index=num; //index variable has the index of the last element in the array
    int insert_num;
    printf("Enter the element to be inserted: \n");
    scanf("%i",&insert_num);
    printf("Enter the index where the element is to be inserted: \n");
    int ind_num;
    scanf("%i",&ind_num);
    if(ind_num==0){
        //element to be inserted at start
        for(int k=index;k>0;k--){
            array1[k]=array1[k-1];
        }
        array1[0]=insert_num;
        printf("The new array is: \n");
        for(int k=0;k<num+1;k++){
            printf("%i ",array1[k]);
        }
    }
    else if(ind_num==num){
        array1[num]=insert_num;
        printf("The new array is: \n");
        for(int k=0;k<num+1;k++){
            printf("%i ",array1[k]);
        }
    }
    else{
        //It means that the insertion is to be done somewhere in the middle
        for(int i=num;i>ind_num;i--){
            array1[i]=array1[i-1];
        }
        array1[ind_num]=insert_num;
        printf("The new array is: \n");
        for(int k=0;k<num+1;k++){
            printf("%i ",array1[k]);
        }
    }
}