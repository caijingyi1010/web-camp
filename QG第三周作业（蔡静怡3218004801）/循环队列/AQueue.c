#include"D:/qg作业/循环队列/AQueue.h"
#include<stdio.h>
#include<stdlib.h>




//初始化
void QueueInitiate(SeqCQueue *Q)
{
	Q->rear = 0;
	Q->front = 0;
	Q->count = 0;
}
 
//非空否
int QueueNotEmpty(SeqCQueue Q)
{
	if(Q.front != 0)
		return 1;
	else
		return 0;
}
 
//入队列
int QueueAppend(SeqCQueue *Q,DataType x)
{
	if(Q->count > 0 && Q->rear == Q->front)
	{
		printf("队列已满无法插入！\n");
		return 0;
	}
	else
	{
		Q->queue[Q->rear]=x;
		Q->rear = (Q->rear + 1) % MaxQueueSize;
		Q->count++;
		return 1;
	}
}
 
//出队列
int QueueDelete(SeqCQueue *Q,DataType *d)
{
	if(Q->count == 0)
	{
		printf("队列已空无数据元素出队列！\n");
		return 0;
	}
	else 
	{
		*d = Q->queue[Q->front];
		Q->front = (Q->front+1)%MaxQueueSize;
		Q->count--;
		return 1;
	}
}
 
//取队头数据元素
int QueueGet(SeqCQueue Q,DataType *d)
{
	if(Q.count == 0)
	{
		printf("队列已空无数据元素可取\n");
		return 0;
	}
	else
	{
		*d = Q.queue[Q.front];
		return 1;
	}
}
 



