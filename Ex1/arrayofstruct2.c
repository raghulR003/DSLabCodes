#include <stdio.h>
struct tourism{
        int code;
        char places[40];
    };
struct tourism poi[50];
struct tourism poi_d[50];
int choice,num;
void insertop()
{
    printf("You have chosen to insert places. How many you want to enter? ");
    scanf("%i",&num);
    printf("Enter places now...\n");
    for (int i=5;i<5+num;i++){
    scanf("%i %s",&poi[i].code,poi[i].places);
}
    printf("Data succesfully entered!\n");
    for(int i=0;i<5+num;i++){
        printf("%i. %s\n",poi[i].code,poi[i].places);
    }
}
void deleteop(){
    printf("You have chosen to delete places. How many you want to delete?");
    scanf("%i",&num);
    for(int i=0;i<5-num;i++){
        poi_d[i]=poi[i];
    }
    printf("Data modification succesful!\n");
    for(int i=0;i<5-num;i++){
        printf("%i. %s\n",poi[i].code,poi[i].places);
    }
}
void findop(){
    printf("You have chosen to find a place. Enter its code: ");
    scanf("%i",&num);
    for(int i=0;i<50;i++)
    {
        if(poi[i].code==num){
            printf("The place you searched is: %s",poi[i].places);
            break;
        }
    }
}
int main()
{
    printf("Enter the places with code: \n");
for (int i=0;i<5;i++){
    scanf("%i %s",&poi[i].code,poi[i].places);
}
printf("\nThere are 5 places of interest. Enter your operation: \n");
printf("1.Insert places\n2.Delete places\n3.Find places\n\n");
scanf("%i",&choice);
switch(choice){
    case 1:
    insertop();
    break;
    case 2:
    deleteop();
    break;
    case 3:
    findop();
    break;
}
}