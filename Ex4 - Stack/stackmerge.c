#include <stdio.h>
#include <stdlib.h>

int main(){
    int st1_s,st2_s;
    printf("Ente the size of both stacks: \n");
    scanf("%i",&st1_s);
    scanf("%i",&st2_s);
    int st1[st1_s+st2_s];
    int st2[st2_s];
    int top=-1;int i,j;
    printf("Enter the stack 1 elements: \n");
    for(i=0;i<st1_s;i++){
        scanf("%i",&st1[i]);
        top++;
    }
    printf("Enter the stack 2 elements: \n");
    for(j=0;j<st2_s;j++){
        scanf("%i",&st2[j]);
    }
}