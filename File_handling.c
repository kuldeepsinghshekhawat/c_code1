#include<stdio.h>

void main()
{
    int i;
    FILE *fp;
    char s[]="Hello Kuldeep Singh";
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("File cannot open!");
        exit(1);
    }

    for(i=0;i<strlen(s);i++)
    {
        fputc(s[i],fp);
    }
    //getch();
    fclose(fp);
    //getch();
}