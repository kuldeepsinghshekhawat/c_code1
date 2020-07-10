//frad function
//int fread(void *Buffer,int Size, int Count, FILE *ptr);


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
    fp=fopen("file.dat","rb");
    if(fp==NULL)
    {
        printf("File not found:");
        exit(1);
    }
    //printf("Enter bookid, title and price");
while(fread(&b1,sizeof(b1),1,fp)>0)
{
printf("%d %s %f",b1.bookid,b1.title,b1.price);
}
fclose(fp);
}



