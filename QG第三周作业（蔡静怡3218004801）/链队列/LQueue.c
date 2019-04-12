#include"D:/qg��ҵ/������/LQueue.h"
#include<stdio.h>
#include<stdlib.h>
//��ʼ��������
void QueueInitiate(LQueue *Q)
{
	Q->rear=NULL;
	Q->front=NULL;
}
 
//�ǿշ�
int QueueNotEmpty(LQueue Q)
{
	if(Q.front == NULL)
		return 0;
	else 
		return 1;
}
 
//�����
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
 
//������
int QueueDelete(LQueue *Q,DataType *d)
{
	LQNode *p;
	if(Q->front == NULL)
	{
		printf("�����ѿ�������Ԫ�س����У�\n");
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
 
//ȡ��ͷ����Ԫ��
int QueueGet(LQueue Q,DataType *d)
{
	if(Q.front == NULL)
	{
		printf("�����ѿ�������Ԫ�س����У�\n");
		return 0;
	}
	else
	{
		*d = Q.front->data;
		return 1;
	}
}
 


