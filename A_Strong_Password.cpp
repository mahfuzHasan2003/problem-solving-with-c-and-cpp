#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      string s;
      cin >> s;
      int i;
      for (i = 1; i < s.size(); i++)
      {
         if (s[i] == s[i - 1])
            break;
      }
      char new_ch = s[i - 1] + 1 > 'z' ? 'y' : s[i - 1] + 1;
      s.insert(s.begin() + i, new_ch);

      cout << s << endl;
   }

   return 0;
}