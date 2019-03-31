#include"D:/qg作业/顺序栈/SqStack.h"
#include<stdio.h>
#include<stdlib.h>

//顺序栈(基于数组的)
Status initStack(SqStack **s,int sizes)  //初始化栈
{
	if(*s)
	{
		printf("\t\t已初始化\n");
		return ERROR;
	}
	(*s)=(SqStack*)malloc(sizeof(SqStack));
	(*s)->elem=(ElemType*)malloc(sizes*sizeof(ElemType));
	(*s)->top=0;(*s)->size=sizes;
	printf("\t\t初始化成功\n");
	return SUCCESS;
}
Status isEmptyStack(SqStack *s)   //判断栈是否为空
{	
	if(s==NULL)
	{
		printf("\t\t未初始化\n");
		return ERROR;
	}
	if(s->top==0)return 0;
	return 1;
}

Status getTopStack(SqStack *s,ElemType *e)   //得到栈顶元素
{
	if(s==NULL)
	{
		printf("\t\t未初始化\n");
		return ERROR;
	}
	if(s->top==0)
	{
		printf("\t\t空栈\n");
		return ERROR;
	}
	*e=*(s->elem+s->top);
}

Status clearStack(SqStack *s)   //清空栈
{
	if(s==NULL)
	{
		printf("\t\t未初始化\n");
		return ERROR;
	}
	if(s->top==0)
	{
		printf("\t\t空栈\n");
		return ERROR;
	}
	s->top = 0;
}

Status destroyStack(SqStack *s)  //销毁栈
{
	if(s==NULL)
	{
		printf("\t\t未初始化\n");
		return ERROR;
	}
	s->top = 0;
	s->elem = NULL;
}

Status stackLength(SqStack *s,int *length)   //检测栈长度
{
	if(s==NULL)
	{
		printf("\t\t未初始化\n");
		return ERROR;
	}
	*length = s->top;
}
Status pushStack(SqStack *s,ElemType data)  //入栈
{
	if(s==NULL)
	{
		printf("\t\t未初始化\n");
		return ERROR;
	}
	*(s->elem+(++s->top)) = data;
	printf("\t\t入栈成功\n");
	return SUCCESS;
}
Status popStack(SqStack *s,ElemType *data)   //出栈
{
	if(s==NULL)
	{
		printf("\t\t未初始化\n");
		return ERROR;
	}
	if(s->top==0)
	{
		printf("\t\t空栈\n");
		return ERROR;
	}
	*data = *(s->elem+(s->top--));
	return SUCCESS;
}


