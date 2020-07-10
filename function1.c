//Takes nothing Return Something
//Function declaration is the function prototype
//clrscr()=  #include<conio.h>
add()
{
    int a,b,c;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
}

isEven()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is Even number",a);
    }
    else
    {
        printf("%d is odd number",a);
    }
    
}


int main()
{
    add();
    isEven();
    return 0;
}