#include<stdio.h>
#include<stdlib.h>
struct node
{
	int r,c,e;
	struct node * next;
};
typedef struct node NODE;
struct SparseMatrix
{
	NODE *first;
	int rv;
	int cv;
};
typedef struct SparseMatrix SPARSE;

SPARSE * createMatrix();
void insert(SPARSE *,int ,int ,int );
int pop(SPARSE *);
//int getTop(SPARSE* );
//int isStackEmpty(SPARSE *);
void display(SPARSE  *);
void destroy(SPARSE  *);


