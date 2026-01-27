#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a, b, c;
      cin >> a >> b >> c;
      if ((a + b + c) % 3 == 0)
      {
         if ((a + b + c) / 3 < a || (a + b + c) / 3 < b)
            cout << "NO" << endl;
         else
            cout << "YES" << endl;
      }
      else
         cout << "NO" << endl;
   }

   return 0;
}