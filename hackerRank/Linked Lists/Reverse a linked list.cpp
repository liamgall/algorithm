/*
Reverse a linked list and return pointer to the head
The input list will have at least one element
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
Node* Reverse(Node *head)
{
	// Complete this method
	Node* result = NULL;

	Node* cur = head;
	Node* temp = (Node*)malloc(sizeof(Node));

	while (cur != NULL) {
		temp = (Node*)malloc(sizeof(Node));
		temp->data = cur->data;
		temp->next = result;
		result = temp;

		cur = cur->next;
	}

	return result;
}
