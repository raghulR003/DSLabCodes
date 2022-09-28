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

void checklist(int num){
    struct node *p;
    int occ=0;
    p=head;
    while(p!=NULL){
        if((p->data)==num){
            occ++;
        }
        p=p->next;
    }
    printf("There are %i occurences of %i in the list",occ,num);
}

int main(){
    int num,check;
    printf("\nEnter the number of elements in the list: ");
    scanf("%i",&num);
    createNodeList(num);
    printf("\nInput the number to be checked for occurences: ");
    scanf("%i",&check);
    checklist(check);
}