#include"D:/qg作业/链队列/LQueue.h"
#include<stdio.h>
#include<stdlib.h>
//初始化链队列
void QueueInitiate(LQueue *Q)
{
	Q->rear=NULL;
	Q->front=NULL;
}
 
//非空否
int QueueNotEmpty(LQueue Q)
{
	if(Q.front == NULL)
		return 0;
	else 
		return 1;
}
 
//入队列
void QueueAppend(LQueue *Q,DataType x)
{
	LQNode *p;
	p=(LQNode *)malloc(sizeof(LQNode));
	p->data=x;
	p->next=NULL;
	if(Q->rear!=NULL) Q->rear->next=p;
	Q->rear=p;
	if(Q->front == NULL) Q->front=p;
}
 
//出队列
int QueueDelete(LQueue *Q,DataType *d)
{
	LQNode *p;
	if(Q->front == NULL)
	{
		printf("队列已空无数据元素出队列！\n");
		return 0;
	}
	else
	{
		*d=Q->front->data;
		p=Q->front;
		Q->front=Q->front->next;
		if(Q->front == NULL) 
			Q->rear=NULL;
		free(p);
		return 1;
	}
}
 
//取队头数据元素
int QueueGet(LQueue Q,DataType *d)
{
	if(Q.front == NULL)
	{
		printf("队列已空无数据元素出队列！\n");
		return 0;
	}
	else
	{
		*d = Q.front->data;
		return 1;
	}
}
 


