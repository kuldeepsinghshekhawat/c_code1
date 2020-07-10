/*

*** Extended concept of pointers
x=5,
let address=1000
p=1000, address of x, so we write *p
q=2000, address of p so we write **q
This process is called Extended pointer



#include<stdio.h>
void main()
{
int *p,***r;
int x=5;
int **q;
p=&x;
q=&p;
r=&q;
***r=6 //it takes the place of x
**q =8, //it takes the place of x
}

***


***
Pointer's Arithmetic
1. We cannot add, multiply, or divide two address
    (Subtraction is possible)
    
2. We cannot multiply an interger to an address and similarly
     we cannot divide an address with an integer

example

a=1000
b=1020
p=1000
p+1=1002
pointer+n=pointer+sizeof(type of pointer)*n
p+4=1000+2*4=1008
p-1=998

q=1020
***

*/





