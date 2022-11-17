
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
void push(STACK *,int );
int pop(STACK *);
/*int pop(STACK *s)
{
if(isStackEmpty(s)) return(0);
return (s->data[s->top--]);
}
*/

//isStackEmpty function checks for stack underflow.
//Returns 1 if stack is empty, 0 otherwise.
int isStackEmpty(STACK *s)
{
    if ((s->top) == -1) return (1);
    return (0);
}

//isStackFull function checks for stack overflow.
//Returns 1 if stack is full, 0 otherwise.
int isStackFull(STACK *s)
{
    if ((s->top) == MAX - 1) return (1);
    return (0);
}

//push operation will push the element 'e' onto the stack
void push(STACK *s, int e)
{
    if (isStackFull(s)) 
    return;
    s->data[++(s->top)] = e;
    return;
}

//pop operation will pop the top element.
//Returns the top element. Returns zero if stack is empty.
int pop(STACK *s)
{
    if (isStackEmpty(s)) return (0);
    return (s->data[(s->top)--]);
}

//getTop operation will return the top element.
int getTop(STACK *s)
{
    if (isStackEmpty(s)) return (0);
    return (s->data[s->top]);
}

int main()
{
    STACK s;
//    int top=-1;
    int choice, e;
    int i;
    s.top=-1;

    printf("Welcome to my interactive stack program\n");
    printf("My program uses static arrays\n");

    while (1) {
	printf("\n\n");
	printf("MENU\n");
	printf("----\n");
	printf("\n\n");
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Get Top\n");
	printf("4. Print the entire array and top value.(for Debugging)\n");
	printf("0. Exit\n");
	printf("\n\n");
	printf("Enter choice :: ");
	scanf("%d", &choice);
	if (choice == 0) break;
	
	switch (choice) {
	    case 1:
		    if (isStackFull(&s))
			printf("Stack Full. Can not push!\n");
		    else {
			printf("Enter the element to be pushed :: ");
			scanf("%d", &e);
			push(&s,e);
		    }
	            break;
	    case 2:
	            if (isStackEmpty(&s))
			printf("Stack Empty. Can not pop!\n");
		    else
			printf("Popped element is %d\n", pop(&s));
			 break;
	    case 3:
	            if (isStackEmpty(&s))
			printf("Stack Empty. Can not get top element!\n");
		    else
			printf("Top element is %d\n", getTop(&s));
	            break;
            case 4:
	            for(i=0; i<MAX; i++) printf("%d ", s.data[i]);
                    printf("\ntop=%d\n", s.top);
		    break;
 	
	}

    }
}
