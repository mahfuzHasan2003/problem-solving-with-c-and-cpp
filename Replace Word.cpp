#include <bits/stdc++.h>
using namespace std;

int main()
{
   int taste_cases;
   cin >> taste_cases;

   for (int i = 0; i < taste_cases; i++)
   {
      string s, x, final_str;
      cin >> s >> x;
      for (int i = 0; i < s.length(); i++)
      {
         string sub_str = s.substr(i, x.length());
         if (sub_str == x)
         {
            final_str += "#";
            i += x.length() - 1;
         }
         else
         {
            final_str += s[i];
         }
      }

      cout << final_str << endl;
      final_str.clear();
   }
   return 0;
}