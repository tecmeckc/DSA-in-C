#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
  int data;
  struct Node *next;

} Node;
typedef struct
{
  Node *top;

} Stack;
void initialize(Stack *s)
{
  s->top = NULL;
}
int isEmpty(Stack *s)
{
  return s->top == NULL;
}
void push(Stack *s, int item)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  if (newNode == NULL)
  {
    printf("The node cannot be deleted.\n");
    exit(1);
  }
  newNode->data = item;
  newNode->next = s->top;
  s->top = newNode;
}
int pop(Stack *s)
{
  if (isEmpty(s))
  {
    printf("Cannot delete!\n");
    exit(1);
  }
  Node *temp = s->top;
  int poppedData = s->top->data;
  s->top = temp->next;
  free(temp);
  return poppedData;
}
int peek(Stack *s)
{
  if (isEmpty(s))
  {
    printf("The top cannot be found.\n");
    exit(1);
  }
  return s->top->data;
}
int main()
{
  Stack s;
  initialize(&s);
  push(&s, 10);
  push(&s, 20);
  push(&s, 30);
  push(&s, 40);
  printf("The popped data is %d\n", pop(&s));
  printf("The peeked data is:%d\n", peek(&s));
  return 0;
}