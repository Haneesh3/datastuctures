#include<stdio.h>
#define max 5
int main()
{
	int queue[max],i,j=1,front=0,rear=0,x=max,ch=1;
	printf("\n 1.insertion\n 2.delete\n 3.display\n 4.quit\n");
	while(ch)
	{
		printf("enter your choice:");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:
				if(rear==x)
				{
					printf("\nqueue is full");
				}
				else
				{
					printf("\nenter the no %d:",j++);
					scanf("%d",&queue[rear++]);
				}
				break;
				case 2:
					if(front==rear)
					{
						printf("queue is empty");
					}
					else
					{
						printf("poped element:%d\n",queue[front++]);
						x++;
					}
					break;
					case 3:
						printf("elements of quque:\n");
						if(front==rear)
						{
							printf("queue is empty");
						}
						else
						{
							for(i=front;i<rear;i++)
							{
								printf("%d\t",queue[i]);
							}
							break;
							case 4:
								default:
									printf("choose correct choice:");
									
						}
		}
	}
	
	return 0;
}
