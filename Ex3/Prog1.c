#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
    char *str1; char *str2;
    int i,j;
    str1=(char*)malloc(40);
    str2=(char*)malloc(40);
    printf("Enter string 1 and 2: \n");
    scanf("%s %s",str1,str2);
    printf("\n1. Not using string functions:\n");
    for(i=0;str1[i]!='\0';i++); //Finding the last index value
    for(j=0;str2[j]!='\0';j++){
        str1[i]=str2[j];
        i++;
    }
    str1[i]='\0';
    printf(str1);
    printf("\nUsing string functions:\n");
    printf("%s",strcat(str1,str2));
    //prints str2 value twice since operation is done already before
}