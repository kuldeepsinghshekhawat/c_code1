//fgets()
//fgets() is a function to read string from a file 
//fgets(str,n,fp)
#include<stdio.h>
void main()
{
    char str[10];
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    while(fgets(str,8,fp)!=NULL)
    {
        printf("String is %s",str);
    }
}