#include"SparseMatrix.h"
SPARSE * createMatrix()
{
	SPARSE * S;
	S=(SPARSE *)malloc(sizeof(SPARSE));
	S->first=NULL;
	return(S);
}
void push(STACK *S,int element)
{
	NODE * newNode;
	newNode = (NODE *)malloc(sizeof(NODE));
	newNode->data=element;
	newNode->next=S->top;
	S->top=newNode;
}
int pop(STACK * S)
{
	NODE * cur;
	int result;
	if(isStackEmpty(S)) return(0);
	cur=S->top;
	S->top=cur->next;
	result=cur->data;
	free(cur);
	return(result);
}

int isStackEmpty(STACK *S)
{
	if (S==NULL) return;
	if (S->top==NULL) return;
	return(0);
}
 
int getTop(STACK *S)
{
	if(isStackEmpty(S)) return(0);
	return(S->top->data);
}

void destroyStack(STACK * S)
{
	if(S==NULL)return;
	while(S->top==NULL) pop(S);
	free(S);
}
void displayStack(STACK * S)
{
	NODE * cur;
	if (isStackEmpty(S))return;
	cur=S->top;
	while(cur!=NULL)
	{
		printf("%d\n",cur->data);
		cur=cur->next;
	}
	printf("\n");
}
