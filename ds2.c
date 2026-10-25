#include<stdio.h>
int main()
{
    int arr[20],n,i,item;
    printf("enter the no. of element:");
    scanf("%d",&n);
    printf("enter array \n");
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
 printf("enter the element to first/start:");
   scanf("%d",&item);
   for(i=n;i>0;i--)
   arr[i]=arr[i-1];
   arr[0]=item;
   n++;
   printf("array after the insertion:\n");
   for(i=0;i<n;i++)
   printf("%d",arr[i]);
   return 0;
}