//int fprintf(FILE * stream, const char *format ,[argument,..,.,..,.....]);
#include<stdio.h>
void main()
{
    FILE *fp;
    int a,b;
    fp=fopen("f1.txt","w");
    printf("Enter the number:");
    scanf("%d%d",&a,&b);
    fprintf(fp,"Sum of %d %d is %d",a,b,a+b);
    fclose(fp);
}