//#include"SparseMatrix.h"
#include<stdio.h>
int nr,nc=0;
int main()
{
	printf("matrix1.......enter the no of rows and columns : ");
	scanf("%d %d",&nr,&nc);
	int m1[nr][nc];
	printf("enter the elements: ");
	int i,j,k,l=0;
	for (i=0;i<=nr;i++)
	for (j=0;j<=nc;j++)
	{
		scanf("%d",m1[nr][nc]);
	}
	printf("m1 matrix is.....");
	for (i=0;i<=nr;i++)
	{
	for (j=0;j<=nc;j++)
	{
		printf("%d ",m1[nr][nc]);
	}
	printf("\n");
	}
}


/*

printf("matrix1.......enter the no of rows and columns : ");
scanf("%d %d",&nr,&nc);
int m1[nr][nc];
int i,j,k,l=0;
for (i=0;i<=nr;i++)
for (j=0;j<=nc;j++)
{
printf("enter the elements: ");
scanf("%d",m1[nr][nc]);
}
printf("m1 matrix is.....");




















































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


*/














