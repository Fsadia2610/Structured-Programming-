/** This program will enter a number and decide whether its positive, negaive or neutral**/
#include<stdio.h>
int main()
{

  float number;
  printf("Please enter the number you want to check:");
  scanf("%f",&number);
  if(number>0)
     {
      printf("Number is poritive");
     }else if(number<0){
     printf("Number is negative");
     }else{
     printf("Number is neutral");
     }

return 0;
}
