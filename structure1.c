#include<stdio.h>
// No memory is consumed for definition of structure
struct date
{
    int d,m,y;
    /* data */
};

struct student
{
    int roll_no;
    char name[20];
    int age;
    /* data */
};

void main()
{
  float x;
  //struct date today={26,7,2015};
  //today variable consumes 6 bytes
  struct date today;
  /*
  today.d=26;
  today.m=7;
  today.y=2018;
*/

printf("Enter today's date:");
scanf("%d/%d/%d",&today.d,&today.m,&today.y);
printf("Date: %d/%d/%d",today.d,today.m,today.y);





}

