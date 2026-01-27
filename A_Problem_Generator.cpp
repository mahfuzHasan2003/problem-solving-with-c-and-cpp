#include <bits/stdc++.h>
using namespace std;

int main()
{

   int t;
   cin >> t;
   while (t--)
   {

      int n, m;
      cin >> n >> m;

      string s;
      cin >> s;

      int freq[7] = {0};
      for (char ch : s)
         freq[ch - 'A']++;

      int more_needed = 0;
      for (int i = 0; i < 7; i++)
      {
         if (freq[i] < m)
            more_needed += (m - freq[i]);
      }

      cout << more_needed << endl;
   }

   return 0;
}