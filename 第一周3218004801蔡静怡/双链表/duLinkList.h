
#ifndef DULINKEDLIST_H_INCLUDED
#define DULINKEDLIST_H_INCLUDED
#define OVERFLOW -1

typedef int ElemType; 


typedef struct DuLNode { 
	ElemType data; 
  	struct DuLNode *prior,  *next; //ֱ��ǰ�������ָ�� 
} DuLNode, *DuLinkedList;


typedef enum Status { 
	ERROR,
	SUCCESS, 
} Status;


//��ʼ�� 
Status InitList_DuL(DuLinkedList *L);
//β�巨����˫������ 
DuLinkedList Creaet(DuLinkList L); 
//��ʾ 
void OutputLinkList(DuLinkList L);
//���� 
void DestroyList_DuL(DuLinkedList *L);





//q����pǰ 
Status InsertBeforeList_DuL(DuLNode *p, DuLNode *q);

//q����p���� 
Status InsertAfterList_DuL(DuLNode *p, DuLNode *q);

//Ҫɾ��p������Ҫ�ҵ�p�� 
Status DeleteList_DuL(DuLNode *p, ElemType *e);
 
//���� 
void TraverseList_DuL(DuLinkedList L, void (*print)(ElemType e));

 
#endif 
