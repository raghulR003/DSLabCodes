// Using Queue ADT, write procedure copyQueue() to copy contents from one queue to another.
#include <stdio.h>
#include <stdlib.h>

int CopyQueue(int *queue,int n){
    int* copyqueue;
    copyqueue=(int*)malloc(400);
    for(int i=0;i<n;i++){
        copyqueue[i]=queue[i];
    }
    printf("\nThe copied queue elements are: \n");
    for(int i=0;i<n;i++){
        printf("%i ",copyqueue[i]);
    }
}
int main(){
    int num;
    printf("Enter the number of queue elements: ");
    scanf("%i",&num);
    int* queue;
    queue=(int*)malloc(400);
    printf("Enter the elements one by one: \n");
    for(int i=0;i<num;i++){
        scanf("%i",&queue[i]);
    }
    CopyQueue(queue,num);
}