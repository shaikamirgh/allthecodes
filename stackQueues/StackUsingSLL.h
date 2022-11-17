#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
typedef struct node NODE;
struct stack
{
	NODE * top;
};
typedef struct stack STACK;

STACK * createStack();
void push(STACK *,int );
int pop(STACK *);
int getTop(STACK* );
int isStackEmpty(STACK *);
void displayStack(STACK  *);
void destroyStack(STACK  *);


