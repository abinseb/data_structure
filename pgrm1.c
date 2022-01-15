#include<stdio.h>
int main()
{
 int a[20],n,pos,i,item;
 printf("enter the array size");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
 printf("enter the position where we want to insert:");
 scanf("%d",&pos);
 printf("enter the value to insert that position");
 scanf("%d",&item);
 for(i=n-1;i>=pos-1;i--)
 a[i+1]=a[i];
 a[pos-1]=item;
 printf("final array after insertion");
 for(i=0;i<=n;i++)
 printf("%d",a[i]);
return 0;
}
//insertion of an element to array
