#include <bits/stdc++.h>
using namespace std;

int main()
{

   int test_cases;
   cin >> test_cases;
   while (test_cases--)
   {
      int x, y;
      cin >> x >> y;
      int screen = y / 2;
      int remaining = screen * 7;
      if (y % 2 == 1)
      {
         screen++;
         remaining += 11;
      }
      if (remaining < x)
      {
         x -= remaining;
         screen += ceil(double(x) / 15);
      }
      cout << screen << endl;
   }

   return 0;
}