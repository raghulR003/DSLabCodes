#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct node *next;
}*head;
void createCircularList(int val){
    struct node *temp,*last;
    head=(struct node*)malloc(sizeof(struct node*));
    printf("Enter the elements now: \n");
    int num,i;
    scanf("%i",&num);
    head->data=num;
    head->next=NULL;
    last=head;
    for(int i=2;i<=val;i++){
        scanf("%i",&num);
        temp=(struct node*)malloc(sizeof(struct node*));
        temp->data=num;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    last->next=head;
}
void deletenodes(){
    struct node *pprev,*p,*pnext;
    pprev=head;
    p=pprev->next;
    pnext=p->next;
    //Initialized values; check for 5 divisibility later
    while(p!=head){
        
    }
}
void printlist(){
    struct node *p;
    p=head;
    printf("\n");
    do{
        printf("%i ",p->data);
        p=p->next;
    }while(p!=head);
}
int main(){
    int val=0;
    scanf("%i",&val);
    createCircularList(val);
    printlist();
}