#include<stdio.h>
void towerfhanio(int n,char s,char aux,char dest)
{
    if(n== 1)
    {
        printf("Mpve disk 1 from %c to %c\n",s,dest);
        return;
    }
    towerfhanio(n-1,s,dest,aux);
    printf("Move disk %d from %c\n",n,s,dest);
    towerfhanio(n-1,aux,s,dest);
}
int main()
{
    int n;
    printf("Enter the no. disc:\n");
    scanf("%d",&n);
    printf("\n steps to solve tower of hanio\n");
    towerfhanio(n,'A','B','C');
    return 0;
}