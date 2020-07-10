/*
int a[]-->Error
int a[5]-->> No error
int a[5]={1,2,3,4,6}
int a[]={1,2,3,4,5}
int a[4]={1,32,4,55,6667,7}------->>>>>>Error   


2-D Array
int a[1][2];
a[0]------>>>>Row
a[1]------>>>>>Column 
2-D array is the array of array

*/
  
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter Number:");
    for ( i = 0; i <=2; i++)
    {
        /* code */
        for (j = 0; j <=2; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter Number:");
    for ( i = 0; i <=2; i++)
    {
        /* code */
        for (j = 0; j <=2; j++)
        {
            /* code */
            scanf("%d",&b[i][j]);
        }
        
    }
   
    for ( i = 0; i <=2; i++)
    {
        /* code */
        for (j = 0; j <=2; j++)
        {
            /* code */
            c[i][j]=a[i][j]+b[i][j];
            printf("%d    ",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
