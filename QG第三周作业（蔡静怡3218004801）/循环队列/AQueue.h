#include<stdio.h>
#define MaxQueueSize 100
//�ṹ�嶨��
typedef int DataType;
typedef struct
{
	DataType queue[MaxQueueSize];
	int rear;
	int front;
	int count;
}SeqCQueue;
 
//��ʼ��
void QueueInitiate(SeqCQueue *Q);

 
//�ǿշ�
int QueueNotEmpty(SeqCQueue Q);

//�����
int QueueAppend(SeqCQueue *Q,DataType x);

 
//������
int QueueDelete(SeqCQueue *Q,DataType *d);

 
//ȡ��ͷ����Ԫ��
int QueueGet(SeqCQueue Q,DataType *d);

#endif
