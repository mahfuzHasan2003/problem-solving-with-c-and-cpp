#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test_cases;
   cin >> test_cases;
   while (test_cases--)
   {
      int n;
      cin >> n;
      string s;
      cin >> s;
      bool flag = false;

      for (int i = 1; i < s.size() - 1; i++)
      {
         if (s.substr(i - 1, 3) == "...")
         {
            flag = true;
            break;
         }
      }
      cout << (flag ? 2 : count(s.begin(), s.end(), '.')) << endl;
   }

   return 0;
}