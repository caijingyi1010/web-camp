









//��ʼ������ ������ʼ���Ƿ�ɹ� ���ɹ��򷵻�SUCCESSS��ʧ���򷵻�ERROR 
status Initlist(LinkedList*L)
{
	*L=NULL;
	if(*L==NULL)
	 return SUCCESS;
	else 
	 return ERROR;
}
//����������� :�����������ͷ��Ȼ���ͷŸýڵ�Ŀռ䣬Ȼ����һ��һ�����ٺ����ڵ� 
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
//����һ���ڵ�(�ڵ�p���ڽڵ�q����)
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

//ɾ��һ���ڵ�:ɾ��p��ĵ�һ���ڵ㲢�Ұ�����ֵ����e 
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
//����ÿ���ڵ㲢�� ��visit���������������е�ÿһ��
void TraverseList(LinkedList *L,void(*visit)(ElemType e))
{
	LNode*pnode=*L;//��������Ŀ�ʼ 
	while(pnode!=NULL) 
	{
		(*visit)(pnode->e);//�Ѻ���Ӧ�õ������е��� 
		pnode=pnode->next;//ǰ������һ�� 
	}
}
//Ԫ�ز��ң�ͨ���ڵ������e�ҵ��ýڵ� 
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
//������ķ�ת(����):��ʹ�ö��ⴢ��ڵ� 
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
//�ж������Ƿ�ɻ���ͷβ�ɻ����м�ɻ��� :����ָ�뷨 
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
		   		 fast=fast->next->next;//��ָ�������� 
		   		 slow=slow->next;//��ָ����һ�� 
		   		 }
	       }
	    return SUCCESS;
	    }
}
//����������ڽڵ�����ã�ż���ڵ㡢�����ڵ㣩 ��1234���2143��12345���21435 
LNode* ReverseEvenList(LinkedList *L)
{
	LNode*p,*q;
	Elemtype temp;
	if(L->next==NULL); //������
	else{
		 p=L->next;
		 while(true)
		 { 
		   if(p->next==NULL) break;//�������ڵ��˳������� 
		   else q=p->next;
		   //���ÿ�ʼ
		   temp=p->data;
		   p->data=q->data;
		   q->data=temp;
		   if(q->next==NULL) break;//ż�����ڵ��˳�������
		   else p=q->next; 
		 }
	return L;
	}
	 
} 
//����������м�ڵ㣬��ָ������������ָ����һ��������ָ���ߵ�β��ʱ����ָ��պ��ߵ��м�ڵ� 
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
	return slow;//�����м�ڵ� 
	
}











 
