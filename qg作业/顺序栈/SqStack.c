#include"D:/qg��ҵ/˳��ջ/SqStack.h"
#include<stdio.h>
#include<stdlib.h>

//˳��ջ(���������)
Status initStack(SqStack **s,int sizes)  //��ʼ��ջ
{
	if(*s)
	{
		printf("\t\t�ѳ�ʼ��\n");
		return ERROR;
	}
	(*s)=(SqStack*)malloc(sizeof(SqStack));
	(*s)->elem=(ElemType*)malloc(sizes*sizeof(ElemType));
	(*s)->top=0;(*s)->size=sizes;
	printf("\t\t��ʼ���ɹ�\n");
	return SUCCESS;
}
Status isEmptyStack(SqStack *s)   //�ж�ջ�Ƿ�Ϊ��
{	
	if(s==NULL)
	{
		printf("\t\tδ��ʼ��\n");
		return ERROR;
	}
	if(s->top==0)return 0;
	return 1;
}

Status getTopStack(SqStack *s,ElemType *e)   //�õ�ջ��Ԫ��
{
	if(s==NULL)
	{
		printf("\t\tδ��ʼ��\n");
		return ERROR;
	}
	if(s->top==0)
	{
		printf("\t\t��ջ\n");
		return ERROR;
	}
	*e=*(s->elem+s->top);
}

Status clearStack(SqStack *s)   //���ջ
{
	if(s==NULL)
	{
		printf("\t\tδ��ʼ��\n");
		return ERROR;
	}
	if(s->top==0)
	{
		printf("\t\t��ջ\n");
		return ERROR;
	}
	s->top = 0;
}

Status destroyStack(SqStack *s)  //����ջ
{
	if(s==NULL)
	{
		printf("\t\tδ��ʼ��\n");
		return ERROR;
	}
	s->top = 0;
	s->elem = NULL;
}

Status stackLength(SqStack *s,int *length)   //���ջ����
{
	if(s==NULL)
	{
		printf("\t\tδ��ʼ��\n");
		return ERROR;
	}
	*length = s->top;
}
Status pushStack(SqStack *s,ElemType data)  //��ջ
{
	if(s==NULL)
	{
		printf("\t\tδ��ʼ��\n");
		return ERROR;
	}
	*(s->elem+(++s->top)) = data;
	printf("\t\t��ջ�ɹ�\n");
	return SUCCESS;
}
Status popStack(SqStack *s,ElemType *data)   //��ջ
{
	if(s==NULL)
	{
		printf("\t\tδ��ʼ��\n");
		return ERROR;
	}
	if(s->top==0)
	{
		printf("\t\t��ջ\n");
		return ERROR;
	}
	*data = *(s->elem+(s->top--));
	return SUCCESS;
}


