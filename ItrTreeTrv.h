#pragma once

typedef int value;

typedef struct TreeNode{
	value data;
	struct TreeNode* left, * right;
}TreeNode;

extern void LinkInOrder(TreeNode* root);
