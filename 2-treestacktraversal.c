#include <stdio.h>
#include <stdlib.h>
#include "ItrTreeTrv.h"

void PlaceNode(TreeNode* node, int direction, int data) {
	TreeNode* newnode = (TreeNode*)malloc(sizeof(TreeNode));
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	if (direction == 0) {
		node->left = newnode;
	}
	else if (direction == 1) {
		node->right = newnode;
	}
}

void GenerateLinkTree(TreeNode* root) {
	PlaceNode(root, 0, 2);
	PlaceNode(root, 1, 9);
	PlaceNode(root->left, 0, 3);
	PlaceNode(root->left, 1, 5);
	PlaceNode(root->right, 0, 10);
	PlaceNode(root->right, 1, 13);
	PlaceNode(root->left->left, 0, 4);
	PlaceNode(root->left->left, 1, 6);
	PlaceNode(root->left->right, 0, 7);
	PlaceNode(root->left->right, 1, 8);
	PlaceNode(root->right->left, 0, 11);
	PlaceNode(root->right->left, 1, 12);
	PlaceNode(root->right->right, 0, 14);
	PlaceNode(root->right->right, 1, 15);

}

void LinkOrders(TreeNode* root) {
	printf("LinkPreOrder: ");
	LinkPreOrder(root);
	printf("LinkInOrder: ");
	LinkInOrder(root);
	printf("LinkPostOrder: ");
	LinkPostOrder(root);
}

main() {
	TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
	root->data = 1;

	GenerateLinkTree(root);
	LinkOrders(root);
}