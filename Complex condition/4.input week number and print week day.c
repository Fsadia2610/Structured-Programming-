/* This program is about input week number and print week day*/

#include<stdio.h>
int main(){



 printf("1.Saturday");
 printf("\n2.Subday");
 printf("\n3.Monday");
 printf("\n4.Tuesday");
 printf("\n5.wednesday");
 printf("\n6.Thursday");
 printf("\n7.Friday");

 int number;

 printf("\nPlease enter the weekday:");
 scanf("%d",&number);

 if(number==1){
    printf("You have selected Saturday");
 }else if (number==2){
 printf("You have selected Sunday");
 }else if (number==3){
 printf("You have selected monday");
 }else if (number==4){
 printf("You have selected Tuesday");
 }
 else if (number==5){
 printf("You have selected wednesday");
 }
  else if (number==6){
 printf("You have selected Thursday");
  }
  else if (number==7){
 printf("You have selected Friday");
 }else{
     printf("Your Desired day is unavailable");}




return 0;
}
