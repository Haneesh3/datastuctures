#include<stdio.h>
#define max 50
int top=-1;
int stack[max];
void push(int item)
{
	if(top==max-1)
	{
		printf("stack is overflow");
	}
	else
	{
		stack[top++]=item;
		printf("the pushed element:%d\n",item);
	}
}
void pop()
{
	int v;
	if(top==-1)
	{
		printf("stack is underflow");
	}
	else
	{
		v=stack[--top];
	
	}
	printf("poped out element:%d\n",v);
}

int main()
{
	push(9);
	push(8);
	pop();
	pop();
	return 0;
}
