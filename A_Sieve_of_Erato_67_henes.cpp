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

      if (find(v.begin(), v.end(), 67) != v.end())
         cout << "YES\n";
      else
         cout << "NO\n";
   }

   return 0;
}