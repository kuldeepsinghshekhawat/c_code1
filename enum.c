/*

Enumerator= It gives an opportunity to invent own data type
and defiine what value the variable of this data type can take.

enum month
{
    jan,  feb, mar, apr, may, june, july, august, sept, oct, november, December

};

enum boolean 
{
    false, True;

};

*/

enum boolean
{
    false,true
};

enum boolean isEven(int x)
{
    if(x%2==0)
        return true;
    else
    {
        return false;
    }
    
}

void main()
{
    int n;
    enum boolean result;
    printf("Enter Number:");
    scanf("%d",&n);
    result=isEven(n);
    if(result==true)
        printf("Even Number");
    else
    {
        printf("Odd Number");
    }
    
}