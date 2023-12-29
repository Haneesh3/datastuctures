#include<stdio.h>
int main()
{
    int a[100],i,j,n;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            printf("The element %d is at index %d",j,i);
            break;
        }
    }
    if(n==i)
    {
        printf("error !! element is not found");
    }
    return 0;
}
