#include <stdio.h>

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
    //Array declared and initialized
    int index=num-1; //index variable has the index of the last element in the array
    printf("Enter the element to be identified: ");
    int find_num;
    scanf("%i",&find_num);
    int flag=0;
    for(int l=0;l<num;l++){
        if(array1[l]==find_num){
            flag=1;
            printf("Element found at position %i",l+1);
            break;
        }
    }
    if(flag==0){
        printf("Element not present in the list given!");
    }
}