#include<stdio.h>
int main(){
   //Declaration of variable
   int i,noofdays, startingDay;
   //User input
   printf("Enter number of days in month:\n");
   scanf("%d",&noofdays);
   printf("Enter the starting day of the week (1=Sun, 7=Sat):\n");
   scanf("%d",&startingDay);
   //Checkers to validate whether the days entered are valid.
   if (noofdays>0 && noofdays<32 && noofdays!=27 && startingDay>0 && startingDay<8){
      for(i=1;i<startingDay;i++) 
         printf("   "); //Three spaces for consistency
      //Loop for displaying the number of days in month
      for(i=1;i<=noofdays;i++){  
         printf("%3d",i); //Three spaces for consistency
         if((startingDay+i-1)%7==0) //condition to move onto the next line
            printf("\n");
      }
   }
   else{
      printf("Input is invalid!\n");
   }
   return 0;
}