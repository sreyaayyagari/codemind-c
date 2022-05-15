#include<stdio.h>
int main()
{
    int n,m,k,i,c=0,j,a[100],b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                k++;
            }
        }
        if(k>n/2)
        {
            m=a[i];
        }
    }
    printf("%d",m);
}