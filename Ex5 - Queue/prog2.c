// Using Queue ADT, write procedure catQueue() that concatenates two queue contents.
#include <stdio.h>
#include <stdlib.h>
int top,top2;
void catQueue(int *queue1,int *queue2){
    int* catqueue;
    catqueue=(int*)malloc(400);
    for(int i=0;i<=top;i++){
        catqueue[i]=queue1[i];
        }
    for(int i=top+1,j=0;i<=top2,j<=top2-top;i++,j++){
        catqueue[i]=queue2[j];
    }
    printf("Concatenated Queue: \n");
    for(int i=0;i<=top2;i++){
        printf("%i ",catqueue[i]);
    }
}
int main(){
    int num1,num2;
    printf("Enter the number of queue 1 and 2 elements: \n");
    scanf("%i",&num1);
    scanf("%i",&num2);
    int* queue1;
    top=-1; int* queue2;
    queue1=(int*)malloc(400);
    queue2=(int*)malloc(400);
    printf("Enter the elements one by one (queue 1): \n");
    for(int i=0;i<num1;i++){
        scanf("%i",&queue1[i]);
        top++;
    }
    top2=top;
    printf("Enter the elements one by one (queue 2): \n");
    for(int i=0;i<num2;i++){
        scanf("%i",&queue2[i]);
        top2++;
    }
    catQueue(queue1,queue2);
}