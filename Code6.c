/* Author=Kuldeep Singh Shekhawat
   Date=20/04/2020
   Topic=Control Stmt*/

#include<stdio.h>
int main()
{  
    int age;
   printf("Enter the age");
   scanf("%d",&age);
  // printf("You have enterd the age %d your age:",age);
   if(age>=18)
   {
       printf("You can vote:");
   } 
   else if(age<=10)
   
   {
       printf("You can vote when you in 18:");
   }
   
   else{
       printf("you can vote:");
   }
   return 0;
}




