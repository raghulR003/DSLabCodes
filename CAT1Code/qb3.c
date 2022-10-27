#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head;

void createDoubleList(int end){
    struct node *temp,*last;
    head=(struct node *)malloc(sizeof(struct node *));
    int i,num;
    printf("Enter elements one by one: ");
    scanf("%i",&num);
    head->data=num;
    head->prev=NULL;
    head->next=NULL;
    last=head;
    last->prev=head;
    for(i=2;i<=end;i++){
        scanf("%i",&num);
        temp=(struct node *)malloc(sizeof(struct node *));
        temp->data=num;
        temp->prev=last;
        last->next=temp;
        temp->next=NULL;
        last=temp;
    }
    last->next=NULL;
}

void printList(){
    struct node *p;
    p=head;
    while(p!=NULL){
        printf("%i ",p->data);
    }
}
int main(){
    printf("Enter the number of elements: ");
    int i;
    scanf("%i",&i);
    createDoubleList(i);
    printf("\nThe list is: ");
    printList();
}