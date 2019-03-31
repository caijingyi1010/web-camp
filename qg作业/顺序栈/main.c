#include"D:/qg作业/顺序栈/SqStack.h"
#include<stdio.h>
#include<stdlib.h>
void menu();
int main()
{
	int order;
	menu();
	while(scanf("%d",&order)==0)getchar();
	
	SqStack *p=NULL;
	while(order)
	{
		switch(order)
		{
			case 1:
			{	int size;
				if(p)
				{
					printf("\t\t已初始化\n");
					break;
				}
				printf("\t\t请输入需要创建的栈的最大长度\n");
				while(scanf("%d",&size)==0)getchar();
				initStack(&p,size);break;
			}
			case 2:clearStack(p);break;
			case 3:if(destroyStack(p))printf("\t\t栈已被销毁\n");p=NULL;break;
			case 4:
				{
					ElemType a;
					if(getTopStack(p,&a)==0)break;
					printf("\t\t栈顶元素是%d\n",a);
				 break;
				}
			case 5:
				{	ElemType a; 
					if(p==NULL)
					{
						printf("\t\t未初始化\n");
	 					break;
					}
						if(p->top==p->size)
						{
							printf("\t\t栈满\n");
							break;
						}
					printf("\t\t输入要入栈的元素 :\n");
					while(scanf("%d",&a)==0)getchar();
					pushStack(p,a);
					break;
				}
			case 6:
				{
					ElemType a;
					Status st = popStack(p,&a);
					if(st==0)break;
					printf("\t\t出栈的元素是%d\n",a);
					break;
				}
			case 7:
				{int a;
				 if(stackLength(p,&a))
				 printf("\t\t栈的长度为%d\n",a);
				 break;
				}
			case 8:system("cls");menu();break;
		    default:printf("\t\t请输入正确的指令\n"); 
		}
		while(scanf("%d",&order)==0)getchar();
		
	}
}
void menu()
{
	printf("\t\t/*************顺序栈***********/\n");
	printf("\t\t/*          1.初始化        */\n");
	printf("\t\t/*          2.清空栈        */\n");
	printf("\t\t/*          3.销毁栈        */\n");
	printf("\t\t/*          4.获取栈顶元素  */\n");
	printf("\t\t/*          5.入栈          */\n");
	printf("\t\t/*          6.出栈          */\n");
	printf("\t\t/*          7.获取栈长度    */\n");
	printf("\t\t/*          8.清屏          */\n");
	printf("\t\t/*          0.退出          */\n");
	printf("\t\t/****************************/\n");
}

