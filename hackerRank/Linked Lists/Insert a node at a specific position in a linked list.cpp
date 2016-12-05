/*
Insert Node at a given position in a linked list
head can be NULL
First element in the linked list is at position 0
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
Node* InsertNth(Node *head, int data, int position)
{
	// Complete this method only
	// Do not write main function.
	Node* cur;
	Node* pre_cur;
	Node* temp = (Node*)malloc(sizeof(Node));
	cur = head;
	if (head == NULL) {
		temp->data = data;
		temp->next = NULL;
		head = temp;
		return head;
	}
	else {

		if (position == 0) {
			temp->data = data;
			temp->next = cur;
			head = temp;
			return head;
		}
		else {
			for (int i = 0; i < position; ++i) {
				pre_cur = cur;
				cur = cur->next;
			}
			temp->data = data;
			temp->next = cur;
			pre_cur->next = temp;
			return head;

		}
	}
}
