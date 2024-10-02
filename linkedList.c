
#include <stdio.h>
#include <stdlib.h>
// defining the struct for node
typedef struct Node
{
  int data;
  struct Node *next;
} Node;
// creating an element with the value as key
Node *createNode(int item)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  if (!newNode)
  {
    printf("Error\n");
    exit(1);
  }
  newNode->data = item;
  newNode->next = NULL;
  return newNode;
}
// traversing and printinng
void traverse(Node *head)
{
  Node *current = head;
  while (current != NULL)
  {
    printf("%d->", current->data);
    current = current->next;
  }
  printf("NULL\n");
}
// insertion at the beginning
Node insertAtBeginning(Node **head, int key)
{
  Node *newNode = createNode(key);
  newNode->next = *head;
  *head = newNode;
}
// insert at the specific location
void insertAfter(Node *prevNode, int key)
{
  if (prevNode == NULL)
  {
    printf("The previous node cannot be null.\n");
    exit(1);
  }
  Node *newNode = createNode(key);
  newNode->next = prevNode->next;
  prevNode->next = newNode;
}

// delete at the beginning
Node *deleteAtBeginning(Node **head)
{
  if (*head == NULL)
  {
    printf("The node cannot be NULL\n");
    exit(1);
  }
  Node *temp = *head;
  *head = (*head)->next;
  free(temp);
}
void deleteAfter(Node *prevNode)
{
  if (prevNode == NULL || prevNode->next == NULL)
  {
    printf("The node cannot be deleted.\n");
    exit(1);
  }
  Node *temp = prevNode->next;
  prevNode->next = temp->next;
  free(temp);
}

int main()
{
  // Write C code here
  Node *head = createNode(10);
  head->next = createNode(20);
  head->next->next = createNode(30);
  // insertAfter(head->next,40);
  // insertAtBeginning(&head,5);
  // insertAtBeginning(&head,67);
  printf("The original Linkedlist:\n");
  traverse(head);
  deleteAfter(head->next); // deletes 30
  printf("The deleted linkedList:\n");
  traverse(head);
  return 0;
}