#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*head;

void createNodeList(int num1){
    struct node *last,*temp;
    head=(struct node*)malloc(sizeof(struct node*));
    int i,num;
    printf("Enter the elements now: \n");
    scanf("%i",&num);
    head->data=num;
    head->next=NULL;
    last=head;
    for(int i=2;i<=num1;i++){
        scanf("%i",&num);
        temp=(struct node*)malloc(sizeof(struct node*));
        temp->data=num;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void printlist(){
    struct node *p;
    p=head;
    while(p!=NULL){
        printf("%i ",p->data);
        p=p->next;
    }
}

int main(){
    int num;
    printf("\nEnter the number of elements in the list: ");
    scanf("%i",&num);
    createNodeList(num);
    removeduplicates();
    //sortlist();
    printlist();
}