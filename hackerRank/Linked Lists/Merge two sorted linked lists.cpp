/*
Merge two sorted lists A and B as one linked list
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
Node* MergeLists(Node *headA, Node* headB)
{
	if (!headA)
		return headB;
	if (!headB)
		return headA;
	if (headA->data > headB->data) {
		headB->next = MergeLists(headA, headB->next);
		return headB;
	}
	else {
		headA->next = MergeLists(headA->next, headB);
		return headA;
	}
}
