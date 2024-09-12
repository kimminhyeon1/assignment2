#pragma once

typedef int value;

typedef struct TreeNode{
	value data;
	struct TreeNode* left, * right;
}TreeNode;

extern void LinkPreOrder(TreeNode* root);
extern void LinkInOrder(TreeNode* root);
extern void LinkPostOrder(TreeNode* root);