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

	if (head == NULL) {
		temp->data = data;
		temp->next = NULL;
		head = temp;
		return head;
	}
	while (cur->next != NULL) {
		cur = cur->next;
	}
	temp->data = data;
	temp->next = NULL;
	cur->next = temp;
	return head;
}
