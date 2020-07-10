#include<stdio.h>
int main()
{
    char s[3][10];
    int i;
    printf("Enter string:");
    for(i=0;i<3;i++)
    {
        gets(s[i]);

    }
    for(i=0;i<3;i++)
    {
        printf("String :%s \n",s[i]);
        
    }
    return 0;
}