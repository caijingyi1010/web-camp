#include "../head/linkedList.h"

/**
 *  @name        : Status InitList(LinkList *L);
 *	@description : initialize an empty linked list with only the head node without value
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
//初始化链表 并检查初始化是否成功 ，成功则返回SUCCESSS，失败则返回ERROR 
status Initlist(LinkedList*L)
{
	*L=NULL;
	if(*L==NULL)
	 return SUCCESS;
	else 
	 return ERROR;
}

/**
 *  @name        : void DestroyList(LinkedList *L)
 *	@description : destroy a linked list, free all the nodes
 *	@param		 : L(the head node)
 *	@return		 : None
 *  @notice      : None
 */
void DestroyList(LinkedList *L)
{
	LinkedList *p;
	while(L!=NULL)
	{
		p=L->next; 
		free(L);
		L=p;
	}
	
}

/**
 *  @name        : Status InsertList(LNode *p, LNode *q)
 *	@description : insert node q after node p
 *	@param		 : p, q
 *	@return		 : Status
 *  @notice      : None
 */
Status InsertList(LNode *p, LNode *q) 
{
	if(p=NULL)
	  return ERROR;
    else {
    	    q->next=p->next;
    	    p->next=q;
    	    return SUCCESS;
         }
	
}
/**
 *  @name        : Status DeleteList(LNode *p, ElemType *e)
 *	@description : delete the first node after the node p and assign its value to e
 *	@param		 : p, e
 *	@return		 : Status
 *  @notice      : None
 */
Status DeleteList(LNode *p, ElemType *e) 
{
	if(p==NULL||p->next==NULL) 
	        return ERROR;
	else
	{
	LNode*temp;
	temp=p->next;
	e=temp->data;
	p->1=temp->1;
	p->next=temp->next;
	free(temp);
	return SUCCESS;
    }	
	
}

/**
 *  @name        : void TraverseList(LinkedList L, void (*visit)(ElemType e))
 *	@description : traverse the linked list and call the funtion visit
 *	@param		 : L(the head node), visit 
 *	@return		 : None
 *  @notice      : None
 */
void TraverseList(LinkedList L, void (*visit)(ElemType e)) 
{
		LNode*pnode=*L;//设置链表的开始 
	while(pnode!=NULL) 
	{
		(*visit)(pnode->e);//把函数应用到链表中的项 
		pnode=pnode->next;//前进到下一项 
	}
	
}

/**
 *  @name        : Status SearchList(LinkedList L, ElemType e)
 *	@description : find the first node in the linked list according to e 
 *	@param		 : L(the head node), e
 *	@return		 : Status
 *  @notice      : None
 */
Status SearchList(LinkedList L, ElemType e) 
{ 
  	if(L==NULL)
	return ERROR;
	else while(L->next!=NULL)
	  {
	  	if(L->data==e)
	  	return SUCCESS;
	  	L=L->next;
	  }
	
} 

/**
 *  @name        : Status ReverseList(LinkedList *L)
 *	@description : reverse the linked list 
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
Status ReverseList(LinkedList *L) 
{
	LinkedList *next;
	LinkedList *prev;
	if(L==NULL)
  	return ERROR;
  	else {
  		   L->next=prev;
  		   prev=L;
  		   L=next;
  		   next=L->next;
  		   return SUCCESS; 
  	     }
	
	
	
}

/**
 *  @name        : Status IsLoopList(LinkedList L)
 *	@description : judge whether the linked list is looped
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
Status IsLoopList(LinkedList L) 
{
		if(L=NULL||L->next=NULL)
	return ERROR;
	else{
		   LNode*slow=L;
		   LNode*fast=L;
		   while(slow!=fast)
		   {
		   	if(fast==NULL||fast->next==NULL)
		   	return ERROR;
		   	else{
		   		 fast=fast->next->next;//快指针走两步 
		   		 slow=slow->next;//慢指针走一步 
		   		 }
	       }
	    return SUCCESS;
	    }
	
}

/**
 *  @name        : LNode* ReverseEvenList(LinkedList *L)
 *	@description : reverse the nodes which value is an even number in the linked list, input: 1 -> 2 -> 3 -> 4  output: 2 -> 1 -> 4 -> 3
 *	@param		 : L(the head node)
 *	@return		 : LNode(the new head node)
 *  @notice      : choose to finish 
 */
LNode* ReverseEvenList(LinkedList *L) 
{
	LNode*p,*q;
	Elemtype temp;
	if(L->next==NULL); //空链表
	else{
		 p=L->next;
		 while(true)
		 { 
		   if(p->next==NULL) break;//奇数个节点退出的条件 
		   else q=p->next;
		   //逆置开始
		   temp=p->data;
		   p->data=q->data;
		   q->data=temp;
		   if(q->next==NULL) break;//偶数个节点退出的条件
		   else p=q->next; 
		 }
	return L;
	}
	
}

/**
 *  @name        : LNode* FindMidNode(LinkedList *L)
 *	@description : find the middle node in the linked list
 *	@param		 : L(the head node)
 *	@return		 : LNode
 *  @notice      : choose to finish 
 */
LNode* FindMidNode(LinkedList *L) 
{
		LNode*slow,*fast;
	slow=L;
	fast=L;
	while(fast!=NULL&&fast->next1=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	} 
	return slow;//返回中间节点 
	
}
