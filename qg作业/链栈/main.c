#include"D:/qg��ҵ/��ջ/LinkStack.h"
#include<stdio.h>
#include<stdlib.h>
void menu();
int main()
{
	int order;
	menu(); 
	while(scanf("%d",&order)==0)getchar();
	
	LinkStack *p=NULL;
	while(order)
	{
		switch(order)
		{
			case 1:initLStack(&p);break;
			case 2:clearLStack(p);break;
			case 3:if(destroyLStack(p))printf("\t\tջ�ѱ�����\n");p=NULL;break;
			case 4:
				{
					ElemType a;
					if(getTopLStack(p,&a)==0)break;
					printf("\t\tջ��Ԫ����%d\n",a);
				 break;
				}
			case 5:
				{	ElemType a; 
					if(p==NULL)
					{
						printf("\t\tδ��ʼ��\n");
	 					break;
					}
					printf("\t\t����Ҫ��ջ��Ԫ�� :\n");
					while(scanf("%d",&a)==0)getchar();
					pushLStack(p,a);
					break;
				}
			case 6:
				{
					ElemType a;
					Status st = popLStack(p,&a);
					if(st==0)break;
					printf("\t\t��ջ��Ԫ����%d\n",a);
					break;
				}
			case 7:
				{int a;
				 if(LStackLength(p,&a))
				 printf("\t\tջ�ĳ���Ϊ%d\n",a);
				 break;
				}
			case 8:system("cls");menu();break;
		    default:printf("\t\t��������ȷ��ָ��\n"); 
		}
		while(scanf("%d",&order)==0)getchar();
		
	}
}
void menu()
{
	printf("\t\t/*************��ջ***********/\n");
	printf("\t\t/*          1.��ʼ��        */\n");
	printf("\t\t/*          2.���ջ        */\n");
	printf("\t\t/*          3.����ջ        */\n");
	printf("\t\t/*          4.��ȡջ��Ԫ��  */\n");
	printf("\t\t/*          5.��ջ          */\n");
	printf("\t\t/*          6.��ջ          */\n");
	printf("\t\t/*          7.��ȡջ����    */\n");
	printf("\t\t/*          8.����          */\n");
	printf("\t\t/*          0.�˳�          */\n");
	printf("\t\t/****************************/\n");
}
