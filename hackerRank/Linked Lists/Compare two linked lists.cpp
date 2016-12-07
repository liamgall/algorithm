/*
Compare two linked lists A and B
Return 1 if they are identical and 0 if they are not.
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
int CompareLists(Node *headA, Node* headB)
{
	// This is a "method-only" submission.
	// You only need to complete this method
	Node* curA, *curB;
	curA = headA;
	curB = headB;

	while (1) {
		if (curA == NULL || curB == NULL) {
			if (curA == NULL && curB == NULL) {
				return 1;
			}
			else {
				return 0;
			}
		}
		if (curA->data == curB->data) {
			curA = curA->next;
			curB = curB->next;
		}
		else {
			return 0;
		}
	}
}
