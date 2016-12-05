/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
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
	else{
		temp->next = head;
		head = temp;
		return head;
	}
}
