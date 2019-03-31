#include"D:/qg作业/链栈/LinkStack.h"
#include<stdio.h>
#include<stdlib.h>
//链栈(基于链表的)
Status initLStack(LinkStack **s)//初始化
{
	if(*s)
	{
		printf("\t\t已初始化\n");
		return ERROR;
	}
	*s= (LinkStack*) malloc (sizeof(LinkStack));
	if((*s)==NULL)
	{
		printf("\t\t初始化失败\n");
		return ERROR;
	}
	(*s)->count = 0,(*s)->top=NULL;
	printf("\t\t初始化成功\n");
	return SUCCESS;
}   

Status isEmptyLStack(LinkStack *s)  //判断链栈是否为空
{	if(s==NULL)
	{
	 printf("\t\t未初始化\n");
	 return ERROR;
	}
	if(s->count == 0)return 1;
	else return 0;
}
Status getTopLStack(LinkStack *s,ElemType *e)  //得到栈顶元素
{	
	if(s==NULL)
	{
	 printf("\t\t未初始化\n");
	 return ERROR;
	}
	if(s->count==0)
	{
		printf("\t\t空栈\n");
		return ERROR; 
	}
	*e = s->top->data;
	return SUCCESS;
}
Status clearLStack(LinkStack *s)   //清空栈
{	
	if(s==NULL)
	{
	 printf("\t\t未初始化\n");
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
	printf("\t\t栈已被清空\n");
	return SUCCESS;
}
Status destroyLStack(LinkStack *s)   //销毁栈
{
	if(s==NULL)
	{
	 printf("\t\t未初始化\n");
	 return ERROR;
	}
	clearLStack(s);
	free(s);
	return SUCCESS;
}
Status LStackLength(LinkStack *s,int *length)    //检测栈长度
{
	if(s==NULL)
	{
	 printf("\t\t未初始化\n");
	 return ERROR;
	}
	*length = s->count;
	return SUCCESS;
}
Status pushLStack(LinkStack *s,ElemType data)   //入栈
{
	if(s==NULL)
	{
	 printf("\t\t未初始化\n");
	 return ERROR;
	}
	StackNode*p = (StackNode*)malloc(sizeof(StackNode));
	p->next = s->top;p->data=data;
	s->top=p;s->count++;
	printf("\t\t入栈成功\n");
	return SUCCESS;
}
Status popLStack(LinkStack *s,ElemType *data)   //出栈
{
	if(s==NULL)
	{
	 printf("\t\t未初始化\n");
	 return ERROR;
	}
	if(s->count==0)
	{
		printf("\t\t空栈\n");
		return ERROR; 
	}
	StackNode *p = s->top;
	*data=p->data;
	s->top = s->top->next;
	free(p);
	s->count--;
}
