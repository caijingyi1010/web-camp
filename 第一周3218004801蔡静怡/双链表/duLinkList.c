#define _CRT_SECURE_NO_WARNINGS 1
#include"du.h"
//初始化 
status InitLink(DuLinkList *L){
    *L = (DuLinkList)malloc(sizeof(DulNode));
    if(!(*L))
        return ERROR;
    (*L)->prior = NULL;
    (*L)->next = NULL;
}
//尾插法建立双向链表 
 DuLinkedList Creaet(DuLinkList L)
{
    DuNode *L,*p,*r;
    L = (DuNode *)malloc(sizeof(DuNode));//申请头结点
    L->next = NULL;
    r = L;
    r->next = NULL;                          //r 为指向终端结点的指针
    ElemType x;
    while(scanf("%d",&x) != EOF)  
    {
        p = (DuNode *)malloc(sizeof(DuNode));
        p->data = x;
        p->next = r->next;
        r->next = p;
        r = p;
    }
    r->next = NULL;
    return L;
}

//显示双链表 
void OutputLinkList(DuLinkList L)
{
    DuLinkList p = L->next;
    int i = 1;
    while(p!=NULL){
        printf("第%d个元素的值是：%d,前驱是：%d\n",i,p->data,p->prior->data);
        p = p->next;
        i++;
    }
}
 //销毁 
Status DestroyList(DuLinkList *L)
{
	DulNode *p,*q;
	q = p = L->next;
	while(p != L)
	{
		p = p->next;
		free(q);
		q = p;
	}
	free(L);
	L = NULL;
	
	return SUCCESS;
}







//把print这个函数应用到链表中的每一项 
void ListTraverse(DuLinkList L,void(*print)(ElemType))
{
	DulNode *p = L->next;
	while(p != L)
	{
		print(p->data);
		p = p->next;
	}
	printf("\n");
}
//print函数 
void print(ElemType e)
{
	printf("%d ",e);
}
//要删除p项首先要找到p项
Status DeleteList_DuL(DuLNode *p, ElemType *e) 
{
	DulNode *p;
	p = L->next;
	if(i < 0 || i > ListLength(L))
		return ERROR;
	p = GetElemP(L,i);
 
	p->pre->next = p->next;
	p->next->pre = p->pre;
	e = p->data;
	free(p);
 
	return SUCCESS;
 } 
 //找到p项 
DulNode *GetElemP(DuLinkList L,int i)
{
	DulNode *p = L;
	int j;
	for(j = 0;j < i; ++j)
	{
		p = p->next;
	}
	return p;
}
//把q插在p的后面 
Status InsertAfterList_DuL(DuLNode *p, DuLNode *q);
{
	DulNode *p,*q;
	if(i < 1 || i > ListLength(L) + 1) return ERROR;
	p = GetElemP(L,i-1);
 
	q = (DuLinkList)malloc(sizeof(DulNode));
	if(!q) return OVERFLOW;
	
	q->next = p->next;
	p->next->pre = q;
	p->next = q;
	q->pre = p;
	q->data = e;
 
	return OK;

}
 

