#define _CRT_SECURE_NO_WARNINGS 1
#include"du.h"
//��ʼ�� 
status InitLink(DuLinkList *L){
    *L = (DuLinkList)malloc(sizeof(DulNode));
    if(!(*L))
        return ERROR;
    (*L)->prior = NULL;
    (*L)->next = NULL;
}
//β�巨����˫������ 
 DuLinkedList Creaet(DuLinkList L)
{
    DuNode *L,*p,*r;
    L = (DuNode *)malloc(sizeof(DuNode));//����ͷ���
    L->next = NULL;
    r = L;
    r->next = NULL;                          //r Ϊָ���ն˽���ָ��
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

//��ʾ˫���� 
void OutputLinkList(DuLinkList L)
{
    DuLinkList p = L->next;
    int i = 1;
    while(p!=NULL){
        printf("��%d��Ԫ�ص�ֵ�ǣ�%d,ǰ���ǣ�%d\n",i,p->data,p->prior->data);
        p = p->next;
        i++;
    }
}
 //���� 
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







//��print�������Ӧ�õ������е�ÿһ�� 
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
//print���� 
void print(ElemType e)
{
	printf("%d ",e);
}
//Ҫɾ��p������Ҫ�ҵ�p��
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
 //�ҵ�p�� 
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
//��q����p�ĺ��� 
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
 

