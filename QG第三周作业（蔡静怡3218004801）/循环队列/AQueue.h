#include<stdio.h>
#define MaxQueueSize 100
//结构体定义
typedef int DataType;
typedef struct
{
	DataType queue[MaxQueueSize];
	int rear;
	int front;
	int count;
}SeqCQueue;
 
//初始化
void QueueInitiate(SeqCQueue *Q);

 
//非空否
int QueueNotEmpty(SeqCQueue Q);

//入队列
int QueueAppend(SeqCQueue *Q,DataType x);

 
//出队列
int QueueDelete(SeqCQueue *Q,DataType *d);

 
//取队头数据元素
int QueueGet(SeqCQueue Q,DataType *d);

#endif
