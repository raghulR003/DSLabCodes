#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
} *head;

void createNodeList(int num){
    struct node *last,*temp;
    head=(struct node *)malloc(sizeof(struct node *));
    int i,n;
    printf("Enter the elements of list 1 now: \n");
    scanf("%i",&n);
    head->data=n;
    head->next=NULL;
    last=head;
    for(i=2;i<=num;i++){
        scanf("%i",&n);
        temp=(struct node *)malloc(sizeof(struct node *));
        temp->data=n;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void swapnodeList(){
    struct node *temp,*sec,*val;
    val=(struct node *)malloc(sizeof(struct node *));
    temp=head;
    sec=head->next->next;
    while(temp!=NULL){
        val->data=temp->data;
        temp->data=sec->data;
        sec->data=val->data;
        head=head->next;
    }
}

void display(){
    struct node *p;
    p=head;
    printf("\nThe list is: \n");
    while(p!=NULL){
        printf("%i ",p->data);
        p=p->next;
        }
}

int main(){
    printf("Enter the number of elements: \n");
    int n;
    scanf("%i",&n);
    createNodeList(n);
    swapnodeList();
    display();
}
