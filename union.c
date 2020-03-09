#include<stdio.h>
void main()
{
 int a[100],b[100],c[100],i,j,k=0,m,n,flag=0;
 printf("enter size of array 1");
 scanf("%d",&m);
  printf("enter size of second array");
  scanf("%d",&n);
  printf("enter 1st array element");
  for(i=0;i<m;i++)
  {

      scanf("%d",&a[i]);

  }
  printf("enter array of second array\n");
     for(j=0;j<n;j++)
     {

         scanf("%d",&b[j]);

     }
     for(i=0;i<m;i++)
     {

         c[k]=a[i];
         k++;
     }
     for(i=0;i<n;i++)

{


         flag=0;
         for(j=0;j<m;j++){


             if(b[i]==c[j])


                 flag=1;



         if(flag==1)


             c[k]=b[i];
             k++;
}}

         for(i=0;i<k;i++)
         {



             printf("%d",c[i]);
         }

   }
