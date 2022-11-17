#include<stdio.h>
#include<stdlib.h>
#define Max 20

struct queue
{
    int front;
    int rear;
    int q[Max]; 
};
typedef struct queue QUEUE;

int isQueueEmpty(QUEUE *myq)
{
    if(myq->front==-1)
    return(1);
    return(0);
}

int isQueueFull(QUEUE *myq)
{
    if(myq->rear==Max-1)
    return(1);
    return(0);
}

void enqueue(QUEUE *myq, int e)
{
    if(isQueueFull(myq))
        return;
    myq->q[++(myq->rear)]=e;
    if(myq->front==-1)
        myq->front++;
    return;
}

int dequeue(QUEUE *myq)
{   int r;
    if(isQueueEmpty(myq))
	{
	printf("Queue Empty,cannot dequeue");
	return(0);
	}
    r=(myq->q[myq->front++]);
    if(myq->front>myq->rear)
    {
        myq->front=-1;
        myq->rear=-1;      
    }
     return(r);
}

int getFront(QUEUE *myq)
{
    if(isQueueEmpty(myq))
    return(0);
    return(myq->q[myq->front]);
}

int getRear(QUEUE *myq)
{
    if(isQueueEmpty(myq))
    return(0);
    return(myq->q[myq->rear]);
}


int main()
{
    QUEUE myq;
    myq.front=-1;
    myq.rear=-1;   
    int i=0;
    int j=0;
    int choice;

 
   while(1)
   {
   printf("\nWelcome to Array Queue 2\n");
   printf("Press 1 enqueue\n");
   printf("Presss 2 dequeue\n"); 
   printf("Press 3 to get front element\n");
   printf("Press 4 to get rear element\n");  
   printf("Press 5 to show queue\n");
   printf("Press 0 to exit\n");
   printf("\nEnter Your choice:-\n");
   scanf("%d",&choice);
   if(choice==0) exit(0);
     
  switch(choice)
  {
   case 1:
       printf("Enter the number:\n");
       scanf("%d",&i);
       enqueue(&myq,i);
       printf("%d",i); 
       break;
 
   case 2:
       printf("%d\n", dequeue(&myq));
       break;

   case 3:
       printf("%d\n", getFront(&myq));
       break;

   case 4:
       printf("%d\n", getRear(&myq));
       break;
      
   case 5:
      for(j=0;j<=myq.rear;j++)
      printf("%d ",myq.q[j]);
      break;
 
    }
  } 
}
