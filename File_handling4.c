//int fwrite(void *Buffer,int Size,int Count, FILE *ptr)
#include<stdio.h>

struct book
{
    int bookid;
    char title[20];
    float price;
};
void main()
{
    struct book b1;
    FILE *fp;
    fp=fopen("file.dat","wb");
    printf("Enter bookid, title and price");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
}



