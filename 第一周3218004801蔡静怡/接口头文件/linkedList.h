#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include<stdbool.h>//c99���� 
typedef int ElemType; 


typedef struct LNode { 
	ElemType data; 
  	struct LNode *next; 
} LNode, *LinkedList;



//��ʼ�� 
bool InitList(LinkedList *L);

//���� 
void DestroyList(LinkedList *L);
//p����q�ĺ��� 
bool InsertList(LNode *p, LNode *q);

//ɾ��p����ĵ�һ���ڵ㣬�����������ݸ���e 
bool DeleteList(LNode *p, ElemType *e);

//��visit����Ӧ�õ������е�ÿһ�� 
void TraverseList(LinkedList L, void (*visit)(ElemType e));

//�ҵ�������Ϊe�ĵ�һ���ڵ� 
bool SearchList(LinkedList L, ElemType e);

//��ת 
bool ReverseList(LinkedList *L);

//�ж������Ƿ�ɻ� 
bool IsLoopList(LinkedList L);

//ż���ڵ㷴ת 
LNode* ReverseEvenList(LinkedList *L);

//�ҵ��м�ڵ� 
LNode* FindMidNode(LinkedList *L);


#endif 
