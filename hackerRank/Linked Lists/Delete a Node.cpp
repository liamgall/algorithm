/*
Delete Node at a given position in a linked list
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
Node* Delete(Node *head, int position)
{
	// Complete this method
	Node* cur;
	Node* pre_cur;
	Node* temp = (Node*)malloc(sizeof(Node));
	cur = head;
	if (position == 0) {
		head = head->next;
		return head;
	}
	for (int i = 0; i < position; ++i) {
		pre_cur = cur;
		cur = cur->next;
	}
	pre_cur->next = cur->next;

	return head;

}
