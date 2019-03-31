#include"D:/qg��ҵ/��ջ/LinkStack.h"
#include<stdio.h>
#include<stdlib.h>
//��ջ(���������)
Status initLStack(LinkStack **s)//��ʼ��
{
	if(*s)
	{
		printf("\t\t�ѳ�ʼ��\n");
		return ERROR;
	}
	*s= (LinkStack*) malloc (sizeof(LinkStack));
	if((*s)==NULL)
	{
		printf("\t\t��ʼ��ʧ��\n");
		return ERROR;
	}
	(*s)->count = 0,(*s)->top=NULL;
	printf("\t\t��ʼ���ɹ�\n");
	return SUCCESS;
}   

Status isEmptyLStack(LinkStack *s)  //�ж���ջ�Ƿ�Ϊ��
{	if(s==NULL)
	{
	 printf("\t\tδ��ʼ��\n");
	 return ERROR;
	}
	if(s->count == 0)return 1;
	else return 0;
}
Status getTopLStack(LinkStack *s,ElemType *e)  //�õ�ջ��Ԫ��
{	
	if(s==NULL)
	{
	 printf("\t\tδ��ʼ��\n");
	 return ERROR;
	}
	if(s->count==0)
	{
		printf("\t\t��ջ\n");
		return ERROR; 
	}
	*e = s->top->data;
	return SUCCESS;
}
Status clearLStack(LinkStack *s)   //���ջ
{	
	if(s==NULL)
	{
	 printf("\t\tδ��ʼ��\n");
	 return ERROR;
	}
	StackNode *p=s->top;
	while(s->count--)
	{
		s->top =s->top->next;
		free(p);
		p=s->top;
	}
	s->count++;
	printf("\t\tջ�ѱ����\n");
	return SUCCESS;
}
Status destroyLStack(LinkStack *s)   //����ջ
{
	if(s==NULL)
	{
	 printf("\t\tδ��ʼ��\n");
	 return ERROR;
	}
	clearLStack(s);
	free(s);
	return SUCCESS;
}
Status LStackLength(LinkStack *s,int *length)    //���ջ����
{
	if(s==NULL)
	{
	 printf("\t\tδ��ʼ��\n");
	 return ERROR;
	}
	*length = s->count;
	return SUCCESS;
}
Status pushLStack(LinkStack *s,ElemType data)   //��ջ
{
	if(s==NULL)
	{
	 printf("\t\tδ��ʼ��\n");
	 return ERROR;
	}
	StackNode*p = (StackNode*)malloc(sizeof(StackNode));
	p->next = s->top;p->data=data;
	s->top=p;s->count++;
	printf("\t\t��ջ�ɹ�\n");
	return SUCCESS;
}
Status popLStack(LinkStack *s,ElemType *data)   //��ջ
{
	if(s==NULL)
	{
	 printf("\t\tδ��ʼ��\n");
	 return ERROR;
	}
	if(s->count==0)
	{
		printf("\t\t��ջ\n");
		return ERROR; 
	}
	StackNode *p = s->top;
	*data=p->data;
	s->top = s->top->next;
	free(p);
	s->count--;
}
