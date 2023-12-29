#include<stdio.h>
int main()
{
    int a[100],i,n;
    n=sizeof a/sizeof a[0];
    printf("eneter the size of array:\n");
    scanf("%d",&n);
    printf("enter the elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("values stored in odd spaces of array:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        printf(" %d",a[i]);
    }
    return 0;
}
