#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
} *head;

void createNodeList(int num){
    struct node *temp,*last;
    head=(struct node*)malloc(sizeof(struct node*));
    int n,i;
    printf("Enter list elements now: \n");
    scanf("%i",&n);
    head->data=n;
    head->next=NULL;
    last=head;
    for(i=2;i<=num;i++){
        scanf("%i",&n);
        temp=(struct node*)malloc(sizeof(struct node*));
        temp->data=n;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void replaceinList(int num,int place){
    struct node *p;
    p=head;
    int i=0;
    while(p!=0){
        if(i+1==place){
            if(p->data=='\0'){
                printf("Invalid function!");
                break;
            }
            else{
                p->data=num;
                break;
            }
        }
        else{
            p=p->next;
            i++;
        }
    }
}

void display(){
    struct node *p;
    p=head;
    while(p!=0){
        printf("%i ",p->data);
        p=p->next;
    }
}

int main(){
    printf("Enter the number of elements: ");
    int n;
    scanf("%i",&n);
    createNodeList(n);
    printf("Enter the number and position to be replaced: \n");
    int num,p;
    scanf("%i",&num);
    scanf("%i",&p);
    replaceinList(num,p);
    printf("The new list is: ");
    display();
}