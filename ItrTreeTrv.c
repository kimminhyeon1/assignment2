#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "ItrTreeTrv.h"

void LinkPreOrder(TreeNode* root) {
	LinkedStackType s;
	TreeNode* nptr = root;

	init(&s);

	push(&s, nptr);
	printf("push(%d) ", nptr->data);
	while (!is_empty(&s)) {
		nptr = s.top;
		pop(&s);
		printf("pop(%d) ", nptr->data);
	}
}

void LinkInOrder(TreeNode* root) {
	LinkedStackType s;
	TreeNode* nptr = root;

	init(&s);

	while (nptr != NULL || !is_empty(&s)) {
		while (nptr != NULL) {
			push(&s, nptr);
			printf("push(%d) ", nptr->data);
			nptr = nptr->left;
		}

		nptr = pop(&s);
		printf("pop(%d) visit(%d)\n", nptr->data, nptr->data);

		nptr = nptr->right;
	}
}