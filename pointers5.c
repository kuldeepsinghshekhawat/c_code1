#include<stdio.h>
char* reverse(char*);
int length(char*);
char* reverse(char *p)
{
    int l,i;
    char t;
    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
 return(p);


    }
    return(p);
}


int length(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
    return(i);
}

void main()
{
// printf("%d\n",length("Computer"));
 printf("%c",reverse("Computer"));
}

