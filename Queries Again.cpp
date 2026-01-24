#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
   int val;
   Node *prev;
   Node *next;

   Node(int val)
   {
      this->val = val;
      prev = NULL;
      next = NULL;
   }
};

Node *head = NULL;
Node *tail = NULL;
int sz = 0;

void insertAtIndex(int idx, int val)
{
   if (idx < 0 || idx > sz)
   {
      cout << "Invalid\n";
      return;
   }

   Node *newNode = new Node(val);

   // Insert at head
   if (idx == 0)
   {
      if (head == NULL)
      {
         head = tail = newNode;
      }
      else
      {
         newNode->next = head;
         head->prev = newNode;
         head = newNode;
      }
   }
   // Insert at tail
   else if (idx == sz)
   {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
   }
   // Insert in middle
   else
   {
      Node *temp = head;
      for (int i = 0; i < idx - 1; i++)
      {
         temp = temp->next;
      }

      newNode->next = temp->next;
      newNode->prev = temp;
      temp->next->prev = newNode;
      temp->next = newNode;
   }

   sz++;

   // Print Left to Right
   cout << "L -> ";
   Node *cur = head;
   while (cur)
   {
      cout << cur->val << " ";
      cur = cur->next;
   }
   cout << "\n";

   // Print Right to Left
   cout << "R -> ";
   cur = tail;
   while (cur)
   {
      cout << cur->val << " ";
      cur = cur->prev;
   }
   cout << "\n";
}

int main()
{
   int Q;
   cin >> Q;

   while (Q--)
   {
      int X, V;
      cin >> X >> V;

      insertAtIndex(X, V);
   }

   return 0;
}