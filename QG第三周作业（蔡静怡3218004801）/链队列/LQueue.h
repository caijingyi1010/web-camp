#include<stdio.h>
#include<malloc.h>
 
//���Ľṹ�嶨��
typedef int DataType;
typedef struct qnode
{
	DataType data;
	struct qnode *next;
}LQNode;
 
//����ͷָ���βָ��
typedef struct
{
	LQNode *front;
	LQNode *rear;
}LQueue;
 
//��ʼ��������
void QueueInitiate(LQueue *Q);

//�ǿշ�
int QueueNotEmpty(LQueue Q);

 
//�����
void QueueAppend(LQueue *Q,DataType x);

//������
int QueueDelete(LQueue *Q,DataType *d);

 
//ȡ��ͷ����Ԫ��
int QueueGet(LQueue Q,DataType *d);


#endif




