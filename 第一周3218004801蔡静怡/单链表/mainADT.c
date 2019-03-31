









//初始化链表 并检查初始化是否成功 ，成功则返回SUCCESSS，失败则返回ERROR 
status Initlist(LinkedList*L)
{
	*L=NULL;
	if(*L==NULL)
	 return SUCCESS;
	else 
	 return ERROR;
}
//单链表的销毁 :先销毁链表的头，然后释放该节点的空间，然后再一个一个销毁后续节点 
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
//插入一个节点(节点p插在节点q后面)
status InsertList(LNode*p,LNode*q) 
{
	if(p=NULL)
	  return ERROR;
    else {
    	    q->next=p->next;
    	    p->next=q;
    	    return SUCCESS;
         }
}

//删除一个节点:删除p后的第一个节点并且把它的值赋给e 
status DeleteList(LNode*p,ElemType*e) 
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
//访问每个节点并且 把visit函数作用于链表中的每一项
void TraverseList(LinkedList *L,void(*visit)(ElemType e))
{
	LNode*pnode=*L;//设置链表的开始 
	while(pnode!=NULL) 
	{
		(*visit)(pnode->e);//把函数应用到链表中的项 
		pnode=pnode->next;//前进到下一项 
	}
}
//元素查找：通过节点的数据e找到该节点 
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
//单链表的反转(迭代):不使用额外储存节点 
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
//判断链表是否成环（头尾成环、中间成环） :快慢指针法 
Status IsLoopList(LinkedList L)
{
	if(L=NULL||L->next=NULL)
	return ERROR;
	else{
		   LNode*slow=L;
		   LNode*fast=L->next;
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
//单链表的相邻节点的逆置（偶数节点、奇数节点） 如1234变成2143、12345变成21435 
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
//查找链表的中间节点，快指针走两步，慢指针走一步，当快指针走到尾部时，慢指针刚好走到中间节点 
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











 
