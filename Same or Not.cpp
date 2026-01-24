#include <bits/stdc++.h>
using namespace std;

string both_same(stack<int> st, queue<int> q)
{
   while (!st.empty())
   {
      if (st.top() != q.front())
         return "NO";

      st.pop();
      q.pop();
   }

   return "YES";
}

int main()
{

   stack<int> st;
   queue<int> q;
   int st_n, q_n, x;
   cin >> st_n >> q_n;
   if (st_n != q_n)
   {
      cout << "NO";
      return 0;
   }

   while (st_n--)
   {
      cin >> x;
      st.push(x);
   }
   while (q_n--)
   {
      cin >> x;
      q.push(x);
   }

   cout << both_same(st, q);

   return 0;
}