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
    printf("Enter the elements now: \n");
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

void findop(int num){
    struct node *p;
    int i=0,pos=0;
    p=head;
    while(p!=NULL){
        if(p->data == num){
            pos=i+1;
            break;
        }
        else{
            i++;
            p=p->next;
        }
    }printf("The element is at position: %i",pos);
}

void insertop(int num, int pos){
    struct node *insert,*p,*prev;
    int i=0;
    prev=head;
    p=head->next;
    insert=(struct node *)malloc(sizeof(struct node *));
    while(p!=NULL){
        if(i==pos-2){
            //The position is found
            prev->next=insert;
            insert->data=num;
            insert->next=p;
            break;
        }
        else{
            i++;
            prev=prev->next;
            p=p->next;
        }
    }
}

void deleteop(int num){
    int i=0;
    struct node *p,*prev,*after;
    prev=head;
    p=head->next;
    after=head->next->next;
    while(p!=NULL){
        if(i==num-2){
            prev->next=after;
            break;
        }
        else{
            i++;
            prev=prev->next;
            p=p->next;
            after=after->next;
        }
    }

}

void display(){
    struct node *p;
    p=head;
    while(p!=NULL){
        printf("%i ",p->data);
        p=p->next;
    }
}

int main(){
    printf("Enter the number of elements: ");
    int num,choice;
    scanf("%i",&num);
    createNodeList(num);
    printf("\n1.Insert\n2.Delete\n3.Find\n");
    while(1){
            printf("\nEnter choice: \n");
        scanf("%i",&choice);
        if(choice>=1 && choice<=3){
        switch(choice){

        case 1: ;
        int numb,pos;
        printf("Enter the number and position to be inserted: \n");
        scanf("%i",&numb);
        scanf("%i",&pos);
        insertop(numb,pos);
        printf("\nThe new list results as: ");
        display();
        break;

        case 2: ;
        int posit;
        printf("Enter the position to be deleted: ");
        scanf("%i",&posit);
        deleteop(posit);
        printf("\nThe new list is: ");
        display();
        break;

        case 3: ;
        int num;
        printf("Enter the number to be identified: ");
        scanf("%i",&num);
        findop(num);
        break;

        }
    }
    else{
        printf("Invalid input!");
        exit(0);
    }
    }
}
