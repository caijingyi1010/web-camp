#define _CRT_SECURE_NO_WARNINGS 1
#include"du.h"
int main() 
{
 
    DuLinkList L;
    InitLink(&L);// ��ʼ�� 
    Create(L);//β�巨�������� 
    OutputLinkList(L);//��ʾ���� 
    DestroyList(&L)//�������� 
    return 0;
}

