 #include<stdio.h>
 void bin_sch(int L[],int N, int item);
 void main()
 {
     int A[]={12,23,45,46,57,58,67,69,78,80,89,90};
     int item=89;
     bin_sch(A,12,item);
 }

 void bin_sch(int L[],int N,int item)
 {
     int l=0;
     int u=12;
     int  mid;
     while (l<=u)
     {
         mid=(l+u)/2;
         if(item==L[mid])
         {
             printf("Item find at mid position %d",mid);
             return ;
         }
         else if(item>L[mid])
         {
             l=mid+1;
             printf("Item found after mid pos");
             return;
         }
         else
         {
             u=mid-1;
             
             printf("Item found before mid pos");
             return;
         }
         
     }
     printf("Search unsuccessful");
     
 }