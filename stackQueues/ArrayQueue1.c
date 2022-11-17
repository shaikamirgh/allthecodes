#include<stdio.h>
#include<stdlib.h>
#define Max 20

int isQueueEmpty(int q[], int f, int r)
{
	if(f==-1)
	return(1);
	return(0);
}

int isQueueFull(int q[], int f, int r)
{
	if(r==(Max-1))
	return(1);
	return(0);
}

void enqueue(int q[], int *f, int *r, int e)
{
	if(isQueueFull(q,*f,*r))
	{
	printf("Queue Full,cannot enqueue!");
	return;
	}
	q[++(*r)]=e;
	if((*f)==-1)
	(*f)++;
}

int dequeue(int q[], int *f, int *r)
{
	int temp=0;
	if(isQueueEmpty(q,*f,*r))
	{
	printf("Queue Empty ,cannot Dequeue");
	return(0);
	}
	if(*f==*r)
	{
		temp=q[*f];
		*f=-1;
		*r=-1;
		return(temp);
	}
	else 
		return(q[(*f)++]);
}

int getFront(int q[], int *f, int *r)
 {
	return("%d", q[*f]);
 }
int getRear(int q[], int *f, int *r)
 {
	return("%d",q[*r]);
 }


int main()
{
	int q1[Max];
	int f1=-1;
	int r1=-1;
	int i=0;
	int j=0;
	int choice;

	while(1)
	{
		printf("\nWelcome to Array Queue 1\n");
		printf("Press 1 to enqueue\n");
		printf("Press 2 to dequeue\n");
		printf("Press 3 to get front element\n");
		printf("Press 4 get rear element\n");
		printf("Press 5 to show the whole queue\n");
		printf("Press 0 to exit\n");

		printf("\nEnter your choice:\n");
		scanf("%d",&choice);
		if(choice==0)
		    exit(0);

	switch(choice)
	  {
	  case 1:
		printf("Enter the number:\n");
		scanf("%d",&i);
		enqueue(q1, &f1, &r1, i);
		printf("%d",i);
		break;
	  case 2:
		printf("%d\n",dequeue(q1,&f1,&r1));
		break;

	  case 3:
		printf("%d\n", getFront(q1, &f1, &r1));
		break;

	  case 4:
		printf(	"%d\n", getRear(q1, &f1, &r1));
		break;

	  case 5:
		for(j=0;j<=r1;j++)
		printf("%d ",q1[j]);
		break;
	 default:
	        printf("Invalid Choice!");
	        break;
	}
   }
}







 
 

