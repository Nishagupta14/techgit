#include<stdio.h>
int main()
{
 int a[10], n,i,j,first,last,mid;
 printf("enter no of elements");
  scanf("%d",&n);
  printf("elements of array");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("element to be searched");
  scanf("%d",&j);
   first=0;
   last=n-1;
   mid=(last+first)/2;
   while(first<=last)
   {

       if(a[mid]<j)
       {
           first=mid+1;


       }
       else if(j<a[mid])
       {

           last=mid-1;
           mid=(first+mid)/2;
       }
       else if(a[mid]==j)
       {

           printf("element found at index%d",i+1);       }
       }

       if(first>last)
       {

           printf("elemnt not present");
       }
}



