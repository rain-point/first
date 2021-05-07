#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef int BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;
void PrevOrder(BTNode* root)
{
	if (root = NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}
void InOrder(BTNode* root);
void PostOrder(BTNode* root);
BTNode* CreateTreeNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	node->data = x;
	node->left = NULL;
	node->right = NULL;
	return node;
}
int TreeSize(BTNode* root, int size)
{
	if (root == NULL)
	{
		return 0;
	}
	++size;
	TreeSize(root->left);
	TreeSize(root->right);
	return size;
}
int main()
{
	BTNode* A = CreateTreeNode('A');
	BTNode* B = CreateTreeNode('A');
	BTNode* C = CreateTreeNode('A');
	BTNode* D = CreateTreeNode('A');
	BTNode* E = CreateTreeNode('A');
	BTNode* F = CreateTreeNode('A');
	A->left = B;
	A->right = C;
	B->left = D;
	C->left = E;
	C->right = F;
	PrevOrder(A);
}