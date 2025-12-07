#include <bits/stdc++.h>
using namespace std;

int main()
{
   string names, name;
   getline(cin, names);
   stringstream ss(names);
   ;
   while (ss >> name)
   {
      if (name == "Jessica")
      {
         cout << "YES";
         return 0;
      }
   }

   cout << "NO";

   return 0;
}