#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;

   while (t--)
   {
      int n;
      cin >> n;

      vector<int> v(n);
      for (int &x : v)
         cin >> x;
      sort(v.begin(), v.end());

      vector<pair<int, int>> freq;
      for (int x : v)
      {
         if (freq.empty() || freq.back().first != x)
            freq.push_back({x, 1});
         else
            freq.back().second++;
      }

      if (freq.size() > 2)
      {
         cout << "NO\n";
         continue;
      }

      if (freq.size() == 1)
      {
         cout << "YES\n";
         continue;
      }

      int c1 = freq[0].second;
      int c2 = freq[1].second;
      if (abs(c1 - c2) <= 1)
         cout << "YES\n";
      else
         cout << "NO\n";
   }

   return 0;
}