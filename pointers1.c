/*
pointers
ex---->>> int x=5;
where x=name of memory block
5=---->>> content in memory block
int take 4bits in DOS base architect

Address of operator

& is knnows as address pf operator
It is an unary operator
operand must be the name of variable
& operator gies address numbber of variable
& is also known as referencing operator


Indirect operator
* is indirect operator
It is also known as dereferencing operator
It is an unary operator
It takes address as an argument
* returns the content? container whose address is its argument

%d= -32768 to 32767
%u= 0 to 65535

We can store address in another variable
int x=5;
int *j;
j=&x;
But j has to be declaredbefore use.



Pointer::::::

1). Pointer is a variable that contains address of another variable
2). pointer always consumes 2 bytes in memory
3). 
*/

#include<stdio.h>
void main()
{
    int x=5,*j;
    j=&x;
    printf("%d %u \n",x,j);
    printf("%d %u \n ",*j,&x);
    printf("%u",*&j);
}

/*
Base Address

1).int a, *j;
    j=1000;
    a=1000,1001;

2). float b, *k;
    k=2000;
    b=2000,2001,2002,2003;

3). char c,*r;
    r=3000,c=3000;

j=&a; k=&b;  r=&c;

*/











