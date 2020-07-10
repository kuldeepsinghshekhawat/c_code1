//fputs(str,fp)
#include<stdio.h>
void main()
{
    char array[10];
    FILE *fp;
    fp=fopen("f1.txt","w");
    printf("Enter a string:");
    gets(array);
    fputs(array,fp);
    fclose(fp);
}



