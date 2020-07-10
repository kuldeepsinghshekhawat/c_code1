/*
SMA: static memory allocation
DMA: Dynamic memory allocation




main()
{
    int a;  //SMA
    float b; // SMA
    int x[5]; //SMA
}

DMA:
malloc()
calloc()
realloc()
free()



#include<stdio.h>
void main()
{
    float *p;
    if()
    p=(float*)malloc(4);
    *p=3.4;

}


int *p;
p=calloc(5,2);
//5 block of int size(size of 2)

Calloc used for Array



Realloc()
void * realloc(void *block, int size);


free()


*/

