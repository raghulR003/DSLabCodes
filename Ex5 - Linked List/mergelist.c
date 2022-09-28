#include <stdio.h>  
#include <stdlib.h>  

struct node{
    int num;
    struct node *next;
}*stnode1,*stnode2,*fnNode,*temp,*fnNode1,*temp1;
int numb=0;
void createNodeList(int n){
    int num,i;
    stnode1=(struct node*)malloc(sizeof(struct node));
    printf("Enter elements of first list: \n");
    scanf("%i",&num);
    stnode1->num=num;
    stnode1->next=NULL;
    temp=stnode1;
    for(int i=2;i<=n;i++){
        fnNode=(struct node*)malloc(sizeof(struct node));
        scanf("%i",&num);
        fnNode->num=num;
        fnNode->next=NULL;
        temp->next=fnNode;
        temp=temp->next;
    }
}
void createNodeList2(int n2){
    int num,i;
    stnode2=(struct node*)malloc(sizeof(struct node*));
    printf("Enter elements of second list: \n");
    scanf("%i",&num);
    stnode2->num=num;
    stnode2->next=NULL;
    numb=n2;
    for(int i=2;i<=n2;i++){
        fnNode1=(struct node*)malloc(sizeof(struct node*));
        scanf("%i",&num);
        fnNode1->num=num;
        fnNode1->next=NULL;
        temp1->next=fnNode1;
        temp1=temp1->next;
    }
}
void mergeListDisplay(){
    struct node *tmp;
    int num;
    fnNode->next=stnode2;
    fnNode->next->num=stnode2->num;
    tmp=stnode1;
    while(stnode1!=NULL){
        printf("%i ",stnode1->num);
        stnode1=stnode1->next;
    }
}

int main(){
    int num1,num2;
    scanf("%i",&num1);
    scanf("%i",&num2);
    createNodeList(num1);
    createNodeList2(num2);
    mergeListDisplay();
}