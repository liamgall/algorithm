/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head, int data)
{
	// Complete this method
	Node* cur;
	Node* temp = (Node*)malloc(sizeof(Node));
	cur = head;

		temp->data = data;
		temp->next = NULL;
	if (head == NULL) {
		head = temp;
		return head;
	}
	while (cur->next != NULL) {
		cur = cur->next;
	}
	cur->next = temp;
	return head;
}
