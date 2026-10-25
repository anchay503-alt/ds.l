#include<stdio.h>
void heapyy(int a[],int n,int i)
{
    int bigone=i,L=2*i+1,R=2*i+2,T;
    if(L<n && a[L]>a[bigone])
    bigone=L;
    if(R<n && a[R]>a[bigone])
    bigone=R;
    if (bigone!=i)
    {
        T=a[i];a[i]=a[bigone];a[bigone];
        heapyy(a,n,bigone);
    }
}
void heapsort(int a[],int n)
{
    int i,T;
    for(i=n/2-1;i>=0;i--)
    heapyy(a,n,i);
    for(i=n-1;i>0;i--)
    {
        T=a[0];a[0]=a[i];a[i]=T;
        heapyy(a,i,0);
    }
}
int main()
{
    int a[50],n,i;
    printf("Enter numbers of ele:");
    scanf("%d",&n);
    
}