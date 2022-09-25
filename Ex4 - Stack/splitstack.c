#include <stdio.h>
#include <stdlib.h>
int main() {
	int* stackorg;int* stack1;int* stack2;
	int top_org=-1,top_1=-1,top_2=-1;
	int temp;
	stackorg=(int*)malloc(400);
	stack1=(int*)malloc(400);
	stack2=(int*)malloc(400);
	printf("Enter elements of original array first. Entering 1010 will exit the loop: \n");
	while(1){
		scanf("%i",&temp);
		if(temp!=1010){
			stackorg[top_org+1]=temp;
			top_org++;
		}else{
			break;
}} int i=0,j=0,z=0;
	while(i<top_org+1){
		temp=stackorg[i];
		if(temp>0){
			stack1[j]=temp;
			top_1++;
			j++;
		}else if(temp<0){
			stack2[z]=temp;
			top_2++;
			z++;
		}i++;
	}printf("The positive number stack is: \n");
	for(i=0;i<=top_1;i++){
		printf("%i ",stack1[i]);
	}printf("\n");
	printf("The negative stack is: \n");
	for(i=0;i<=top_2;i++){
		printf("%i ",stack2[i]); }}