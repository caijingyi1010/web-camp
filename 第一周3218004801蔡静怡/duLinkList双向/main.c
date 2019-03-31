#define _CRT_SECURE_NO_WARNINGS 1
#include"du.h"
int main() 
{
 
    DuLinkList L;
    InitLink(&L);// 初始化 
    Create(L);//尾插法建立链表 
    OutputLinkList(L);//显示链表 
    DestroyList(&L)//销毁链表 
    return 0;
}

