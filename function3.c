// Take nothing Return Something
void main()
{
    int s;
    s=add();
    printf("Sum is %d",s);
}

int add()
{
    int a,b,c;
    printf("Enter 2 number:");
    scanf("%d%d",&a,&b);
    c=a+b;
    return(c);
}