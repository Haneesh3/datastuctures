#include<stdio.h>
int main()
{
	int a[100],i,j,s,mid,n;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(int m=0;m<n;m++)
	{
		scanf("%d",&a[m]);
	}
	printf("enter the search:\n ");
	scanf("%d",&s);
	i=0;
	j=n-1;
	mid=(i+j)/2;
	while(i<=j)
	{
		if(a[mid]==s)
		{
			printf("the value is found at index:%d",mid);
			break;
		}
		else if(a[mid]<s)
		{
			i=mid+1;
		}
		else
		{
			j=mid-1;
		}
		mid=(i+j)/2;
	}
	if(i>j)
	{
		printf("not found");
	}
	return 0;
}
