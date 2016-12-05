/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
  int arr[1000];
  int i=0;
  Node* cur;
  cur = head;
  while(cur != NULL){
      arr[i++] = cur->data;
      cur = cur->next;
  }
  for(int j = --i ; j >=0 ; --j){
      cout << arr[j] << endl;
  }
}
