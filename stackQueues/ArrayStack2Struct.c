#include<stdio.h>
#define MAX 20

struct stack
{
int top;
int data[MAX];
};
typedef struct stack STACK;

int isStackEmpty(STACK *);
int isStackFull(STACK *);
int getTop(STACK *);
int push(STACK *,int );
int pop(STACK *);

int pop(STACK *s)
{
if(isStackEmpty(s)) return(0);
return (s->data[s->top--]);
}
