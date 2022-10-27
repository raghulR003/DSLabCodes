#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
}*head,*tail;

void createList(int data){
    int i,num;
    struct node *temp;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the elements now: \n");
    scanf("%i",&num);
    head->data=num;
    head->prev=NULL;
    head->next=NULL;
    tail=head;
    for(int i=2;i<=data;i++){
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%i",&num);
        temp->data=num;
        temp->prev=tail;
        temp->next=NULL;
        tail->next=temp;
        tail=temp;
    }
}

void insertNode(int data){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->prev=tail;
    temp->next=NULL;
    tail->next=temp;
    tail=temp;

}
void deletenode(int data){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp!=NULL){
        if(temp->data==data){
            //Means the deletion element is found
            temp->prev->next=temp->next;
            break;
        }
        else{
            temp=temp->next;
        }
    }

}

void findinList(int num){
    struct node *p;
    p=head;
    int i=0;
    while(p!=NULL){
        int data;
        data=p->data;
        if(data==num){
            printf("The required element %i found at node %i",num,i);
            break;
        }
        else{
            i++;
            p=p->next;
        }
    }
}
void displayList(){
    struct node *p;
    p=head;
    printf("\nThe list is: \n");
    while(p!=NULL){
        printf("%i ",p->data);
        p=p->next;
    }
}

int main(){
    printf("Creating node....\n");
    printf("Enter the number of elements: ");
    int num;
    scanf("%i",&num);
    createList(num);
    printf("\n1.Add node\n2.Delete node\n3.Find node\n\n");
    int choice;
    scanf("%i",&choice);
    switch(choice){
        case 1:
        //Add node
        printf("\nEnter the number of elements to be added: ");
        int size;
        scanf("%i",&size);
        printf("\nEnter the elements now: \n");
        for(int i=0;i<size;i++){
            int temp;
            scanf("%i",&temp);
            insertNode(temp);
        }
        displayList();
        break;

        case 2:
        //Delete node
        printf("\nEnter element to be deleted: ");
        int del;
        scanf("%i",&del);
        deletenode(del);
        displayList();
        break;

        case 3:
        //Find node
        printf("\nEnter element to be searched: ");
        int find;
        scanf("%i",&find);
        findinList(find);
        break;
    }
}
