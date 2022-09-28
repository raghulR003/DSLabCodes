#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
} *head1,*head2;

void createList1(int num1){
    struct node *last1,*temp1;
    head1=(struct node*)malloc(sizeof(struct node*));
    int num,i;
    printf("\n");
    scanf("%i",&num);
    head1->data=num;
    head1->next=NULL;
    temp1=head1;
    for(i=2;i<=num1;i++){
        last1=(struct node*)malloc(sizeof(struct node*));
        head1->next=last1;
        scanf("%i",&num);
        last1->data=num;
        last1->next=NULL;
        temp1->next=last1;
        temp1=temp1->next;
    }
}

void createList2(int num2){
    struct node *last2,*temp2;
    head2=(struct node*)malloc(sizeof(struct node*));
    int num,i;
    printf("\n");
    scanf("%i",&num);
    head2->data=num;
    head2->next=NULL;
    temp2=head2;
    for(i=2;i<=num2;i++){
        last2=(struct node*)malloc(sizeof(struct node*));
        head2->next=last2;
        scanf("%i",&num);
        last2->data=num;
        last2->next=NULL;
        temp2->next=last2;
        temp2=temp2->next;
    }
}

void printlist(){
    struct node *p;
    p=head1;
    while(p!=NULL){
        printf("%i ",p->data);
        p=p->next;
    }
}

int main(){
    int n1,n2;
    scanf("%i",&n1);
    scanf("%i",&n2);
    createList1(n1);
    printlist();
    createList1(n2);
    printf("\n\n");
}