
#ifndef DULINKEDLIST_H_INCLUDED
#define DULINKEDLIST_H_INCLUDED
#define OVERFLOW -1

typedef int ElemType; 


typedef struct DuLNode { 
	ElemType data; 
  	struct DuLNode *prior,  *next; //直接前驱、后继指针 
} DuLNode, *DuLinkedList;


typedef enum Status { 
	ERROR,
	SUCCESS, 
} Status;


//初始化 
Status InitList_DuL(DuLinkedList *L);
//尾插法建立双向链表 
DuLinkedList Creaet(DuLinkList L); 
//显示 
void OutputLinkList(DuLinkList L);
//销毁 
void DestroyList_DuL(DuLinkedList *L);





//q插在p前 
Status InsertBeforeList_DuL(DuLNode *p, DuLNode *q);

//q插在p后面 
Status InsertAfterList_DuL(DuLNode *p, DuLNode *q);

//要删除p项首先要找到p项 
Status DeleteList_DuL(DuLNode *p, ElemType *e);
 
//遍历 
void TraverseList_DuL(DuLinkedList L, void (*print)(ElemType e));

 
#endif 
