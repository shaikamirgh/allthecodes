#include<stdio.h>

#define MAX 10

//isStackEmpty function checks for stack underflow.
//Returns 1 if stack is empty, 0 otherwise.
int isStackEmpty(int s[], int top)
{
    if (top == -1) return (1);
    return (0);
}

//isStackFull function checks for stack overflow.
//Returns 1 if stack is full, 0 otherwise.
int isStackFull(int s[], int top)
{
    if (top == MAX - 1) return (1);
    return (0);
}

//push operation will push the element 'e' onto the stack
void push(int s[], int * top, int e)
{
    if (isStackFull(s, *top)) return;
    s[++(*top)] = e;
    return;
}

//pop operation will pop the top element.
//Returns the top element. Returns zero if stack is empty.
int pop(int s[], int * top)
{
    if (isStackEmpty(s, *top)) return (0);
    return (s[(*top)--]);
}

//getTop operation will return the top element.
int getTop(int s[], int top)
{
    if (isStackEmpty(s, top)) return (0);
    return (s[top]);
}

int main()
{
    int s[MAX];
    int top=-1;

    int choice, e;
    int i;

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
	            if (isStackFull(s, top))
			printf("Stack Full. Can not push!\n");
		    else {
			printf("Enter the element to be pushed :: ");
			scanf("%d", &e);
			push(s, &top, e);
		    }
	            break;
	    case 2:
	            if (isStackEmpty(s, top))
			printf("Stack Empty. Can not pop!\n");
		    else
			printf("Popped element is %d\n", pop(s, &top));
		    break;
	    case 3:
	            if (isStackEmpty(s, top))
			printf("Stack Empty. Can not get top element!\n");
		    else
			printf("Top element is %d\n", getTop(s, top));
	            break;
            case 4:
	            for(i=0; i<MAX; i++) printf("%d ", s[i]);
                    printf("\ntop=%d\n", top);
		    break;
	}

    }
}
