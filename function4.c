//Take something return something
int add(int, int);
void main()
{
    int x,y,s;
    //add(int,int);
    printf("Enter 2 number:");
    scanf("%d%d",&x,&y);
    s=add(x,y);//call by value and actual argument
    printf("%d",s);
    return 0;
}

int add(int a, int b)
{
    int c;
    c=a+b;
    return(c);
}