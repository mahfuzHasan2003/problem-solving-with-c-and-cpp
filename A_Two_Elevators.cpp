#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test_cases;
   cin >> test_cases;
   while (test_cases--)
   {
      int a, b, c;
      cin >> a >> b >> c;
      int time1 = a - 1;
      int time2 = abs(b - c) + (c - 1);
      int ans = time1 == time2 ? 3 : time1 < time2 ? 1
                                                   : 2;
      cout << ans << endl;
   }

   return 0;
}