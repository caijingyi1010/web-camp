#include<stdio.h>
#include<malloc.h>
 
//结点的结构体定义
typedef int DataType;
typedef struct qnode
{
	DataType data;
	struct qnode *next;
}LQNode;
 
//定义头指针和尾指针
typedef struct
{
	LQNode *front;
	LQNode *rear;
}LQueue;
 
//初始化链队列
void QueueInitiate(LQueue *Q);

//非空否
int QueueNotEmpty(LQueue Q);

 
//入队列
void QueueAppend(LQueue *Q,DataType x);

//出队列
int QueueDelete(LQueue *Q,DataType *d);

 
//取队头数据元素
int QueueGet(LQueue Q,DataType *d);


#endif




