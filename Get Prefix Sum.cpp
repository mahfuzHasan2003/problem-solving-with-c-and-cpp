#include <bits/stdc++.h>
using namespace std;

vector<long long> Get_Prefix_Sum_By_Reversing(vector<int> v, int n)
{
   vector<long long> prefix(n);
   prefix[0] = v[0];
   for (int i = 1; i < n; i++)
   {
      prefix[i] = prefix[i - 1] + v[i];
   }
   reverse(prefix.begin(), prefix.end());
   return prefix;
}

int main()
{
   int n;
   cin >> n;
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
      cin >> v[i];
   }
   vector<long long> prefix_sum = Get_Prefix_Sum_By_Reversing(v, n);
   for (long long i : prefix_sum)
      cout << i << " ";
   return 0;
}