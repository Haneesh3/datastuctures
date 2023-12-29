#include<stdio.h>
int main()
{
	int n,i,largest=0,second,a[100];
	n=sizeof a/sizeof a[0];
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(largest<a[i])
		{
			second=largest;
			largest=a[i];
		}
		else
		{
			second=a[i];
		}
	}
	printf("%d",second);
	return 0;
}
