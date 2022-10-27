#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
}*head,*tail;

void createList(int data){
    int i;
    char num;
    struct node *temp;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the word now: \n");
    scanf("%s",&num);
    head->data=num;
    head->prev=NULL;
    head->next=NULL;
    tail=head;
    for(int i=2;i<=data;i++){
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%s",&num);
        temp->data=num;
        temp->prev=tail;
        temp->next=NULL;
        tail->next=temp;
        tail=temp;
    }
}

int checkpalindrome(){
    struct node *left,*right;
    left=head;
    right=tail;
    while(left!=right){
        if(left->data!=right->data){
            return 0;
        }
        left=left->next;
        right=right->prev;
    }
    return 1;
}
int main(){
    printf("Enter the number of elements: ");
    int num;
    scanf("%i",&num);
    createList(num);
    if(checkpalindrome()==1){
        printf("It's a palindrome");
    }
    else{
        printf("It's not a palindrome!");
    }
}