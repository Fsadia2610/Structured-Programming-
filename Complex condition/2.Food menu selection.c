/* This program is about selecting menu on a restaurant*/

#include<stdio.h>
int main(){



 printf("1.Kabab");
 printf("\n2.Porota");
 printf("\n3.Naan");

 int choice;

 printf("\nPlease enter the food of your choice here:");
 scanf("%d",&choice);

 if(choice==1){
    printf("You have ordered Kabab");

 }else if (choice==2){
 printf("You have ordered Porota");
 }else if (choice==3){
 printf("You have ordered Naan");
 }else{
     printf("Your Desired food is unavailable");}




return 0;
}
