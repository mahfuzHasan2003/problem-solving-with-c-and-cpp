#include <bits/stdc++.h>
using namespace std;

int main()
{

   int t;
   cin >> t;
   while (t--)
   {
      int n, min_time = INT_MAX;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];

      for (int i = 0; i < n; i++)
      {
         int total_time = 0;
         for (int j = 0; j < n - 1; j++)
         {
            if (j == i || (i == n - 1 && j == n - 2))
               continue;
            total_time += abs(arr[j] - arr[j + 1 == i ? j + 2 : j + 1]);
            // cout << arr[j] << " " << arr[j+1 == i ? j + 2 : j+1] <<  " " << endl;
         }
         // cout << total_time << endl;
         min_time = min(min_time, total_time);
      }
      cout << min_time << endl;
   }

   return 0;
}