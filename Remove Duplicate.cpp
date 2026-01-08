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

// Insert value at the end
void insert_data_end(Node *&head, Node *&tail, int val)
{
   Node *newNode = new Node(val);
   if (head == NULL)
   {
      head = tail = newNode;
      return;
   }

   tail->next = newNode;
   tail = newNode;
}

// Remove duplicate values
void remove_duplicates(Node *head)
{
   Node *current = head;

   while (current != NULL)
   {
      Node *temp = current;

      while (temp->next != NULL)
      {
         if (temp->next->val == current->val)
         {
            Node *duplicate = temp->next;
            temp->next = temp->next->next;
            delete duplicate;
         }
         else
         {
            temp = temp->next;
         }
      }
      current = current->next;
   }
}

// Print the linked list
void print_list(Node *head)
{
   while (head != NULL)
   {
      cout << head->val;
      if (head->next != NULL)
         cout << " ";
      head = head->next;
   }
}

int main()
{

   Node *head = NULL;
   Node *tail = NULL;

   // Input until -1
   int x;
   while (cin >> x && x != -1)
      insert_data_end(head, tail, x);

   remove_duplicates(head);
   print_list(head);

   return 0;
}
