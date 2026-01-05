#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
   int val;
   Node *next;

   Node(int val)
   {
      this->val = val;
      this->next = NULL;
   }
};

// Insert at head
void insertAtHead(Node *&head, int v)
{
   Node *newNode = new Node(v);
   newNode->next = head;
   head = newNode;
}

// Insert at tail
void insertAtTail(Node *&head, int v)
{
   Node *newNode = new Node(v);
   if (head == NULL)
   {
      head = newNode;
      return;
   }

   Node *temp = head;
   while (temp->next != NULL)
   {
      temp = temp->next;
   }
   temp->next = newNode;
}

// Delete at index
void deleteAtIndex(Node *&head, int idx)
{
   if (head == NULL)
      return;

   if (idx == 0)
   {
      Node *del = head;
      head = head->next;
      delete del;
      return;
   }

   Node *temp = head;
   for (int i = 0; i < idx - 1; i++)
   {
      if (temp->next == NULL)
         return;
      temp = temp->next;
   }

   if (temp->next == NULL)
      return;

   Node *del = temp->next;
   temp->next = del->next;
   delete del;
}

// Print linked list
void printList(Node *head)
{
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->val << " ";
      temp = temp->next;
   }
   cout << endl;
}

int main()
{
   int Q;
   cin >> Q;

   Node *head = NULL;

   while (Q--)
   {
      int X, V;
      cin >> X >> V;

      if (X == 0)
         insertAtHead(head, V);
      else if (X == 1)
         insertAtTail(head, V);
      else if (X == 2)
         deleteAtIndex(head, V);

      printList(head);
   }

   return 0;
}