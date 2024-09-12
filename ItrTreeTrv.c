#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "ItrTreeTrv.h"

void LinkInOrder(TreeNode* root) {
	LinkedStackType s;
	TreeNode* nptr = root;

	init(&s);

	while (nptr != NULL || !is_empty(&s)) {
		while (nptr != NULL) {
			push(&s, nptr);
			printf("push(%d)", nptr->data);
			nptr = nptr->left;
		}

		nptr = pop(&s);
		printf("pop(%d) visit(%d)", nptr->data, nptr->data);

		nptr = nptr->right;
	}
}