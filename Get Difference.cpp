#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
   int val;
   Node *Next;

   Node(int val)
   {
      this->val = val;
      this->Next = NULL;
   }
};

int main()
{
   Node *head = NULL;
   Node *tail = NULL;

   while (true)
   {
      int x;
      cin >> x;

      if (x == -1)
         break;

      Node *newNode = new Node(x);

      if (head == NULL)
         head = tail = newNode;
      else
      {
         tail->Next = newNode;
         tail = newNode;
      }
   }

   if (head == NULL || head->Next == NULL)
   {
      cout << 0;
      return 0;
   }

   int mx = head->val;
   int mn = head->val;

   Node *temp = head;
   while (temp != NULL)
   {
      mx = max(mx, temp->val);
      mn = min(mn, temp->val);
      temp = temp->Next;
   }

   cout << mx - mn;

   return 0;
}