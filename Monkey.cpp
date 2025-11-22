#include <bits/stdc++.h>
using namespace std;

int main()
{
   string inp;
   while (getline(cin, inp))
   {
      inp.erase(remove(inp.begin(), inp.end(), ' '), inp.end());
      sort(inp.begin(), inp.end());
      cout << inp << endl;
   }
}