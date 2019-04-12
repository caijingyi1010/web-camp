#include"D:/qg作业/链队列/LQueue.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
	LQueue Q;
	int x;
	QueueInitiate(&Q);
	QueueAppend(&Q,10);
	QueueAppend(&Q,20);
	QueueAppend(&Q,30);
	QueueGet(Q,&x);
	printf("%d\n",x);
	QueueDelete(&Q,&x);
	printf("%d\n",x);
	QueueGet(Q,&x);
	printf("%d\n",x);
	return 0;
}

