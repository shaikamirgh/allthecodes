#include<stdio.h>
#include<stdlib.h>
#include"StackUsingSLL.h"
#define MAX 20;
int main()
{
    STACK *s;
    s=createStack(4);
    int choice, e;
    int i;
//    s.top=-1;
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
		    if (isStackFull(s))
			printf("Stack Full. Can not push!\n");
		    else {
			printf("Enter the element to be pushed :: ");
			scanf("%d", &e);
			push(s,e);
		    }
	            break;
	    case 2:
	            if (isStackEmpty(s))
			printf("Stack Empty. Can not pop!\n");
		    else
			printf("Popped element is %d\n", pop(s));
			 break;
	    case 3:
	            if (isStackEmpty(s))
			printf("Stack Empty. Can not get top element!\n");
		    else
			printf("Top element is %d\n", getTop(s));
	            break;
	    case 4:
		    for(i=0;(i<=(12));i++)
		    printf("%d ", s->data[i]);
                    printf("\ntop=%d\n", s->top);
		    break;
 	
	}

    }
}
