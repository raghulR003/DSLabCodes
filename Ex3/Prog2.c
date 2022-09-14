#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
    char *str1;
    int i;
    str1=(char*)malloc(40);
    printf("Enter the string value: \n");
    scanf("%s",str1);
    printf("\nNot using inbuilt functions: (case swapping)\n");
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]>=65 && str1[i]<=90){
            str1[i]+=32;
        }
        else{
            str1[i]-=32;
        }
    }
    printf("%s",str1);
    printf("\nUsing inbuilt functions: \n");
    printf("Lower Case: %s\n",strlwr(str1));
    printf("Upper Case: %s\n",strupr(str1));
}