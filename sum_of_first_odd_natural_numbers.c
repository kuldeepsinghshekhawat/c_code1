 #include<stdio.h>
 int sum(int n)
{
    if(n==1)
        return 1;
    return(2*n-1+sum(n-1));

}

void main()
{
    printf("%d",sum(5));
}