#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct TreeNode
{
	int val;
	struct TreeNode* child1;
	struct TreeNode* child2;
	struct TreeNode* child3;
};
typedefe int DataType;
struct Node
{
	struct Node* _fistchild1;//��һ�����ӽ��
	struct Node* _NextBrother;//ָ����һ���ֵܽ��
	DataType _data;
};