#include <bits/stdc++.h>
using namespace std;

string is_valid(string s)
{
   stack<char> st;
   for (char ch : s)
   {
      if (!st.empty() &&
          ((ch == '0' && st.top() == '1') ||
           (ch == '1' && st.top() == '0')))
      {
         st.pop();
      }
      else
         st.push(ch);
   }
   return st.empty() ? "YES" : "NO";
}
int main()
{
   int test_cases;
   cin >> test_cases;
   while (test_cases--)
   {
      string s;
      cin >> s;
      cout << is_valid(s) << endl;
   }

   return 0;
}