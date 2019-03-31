#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include<stdbool.h>//c99特性 
typedef int ElemType; 


typedef struct LNode { 
	ElemType data; 
  	struct LNode *next; 
} LNode, *LinkedList;



//初始化 
bool InitList(LinkedList *L);

//销毁 
void DestroyList(LinkedList *L);
//p插在q的后面 
bool InsertList(LNode *p, LNode *q);

//删除p后面的第一个节点，并把它的数据赋给e 
bool DeleteList(LNode *p, ElemType *e);

//把visit函数应用到链表中的每一项 
void TraverseList(LinkedList L, void (*visit)(ElemType e));

//找到数据域为e的第一个节点 
bool SearchList(LinkedList L, ElemType e);

//反转 
bool ReverseList(LinkedList *L);

//判断链表是否成环 
bool IsLoopList(LinkedList L);

//偶数节点反转 
LNode* ReverseEvenList(LinkedList *L);

//找到中间节点 
LNode* FindMidNode(LinkedList *L);


#endif 
