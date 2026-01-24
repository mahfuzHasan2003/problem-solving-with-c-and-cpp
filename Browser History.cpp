#include <bits/stdc++.h>
using namespace std;
int main()
{

   list<string> addresses;
   string s;

   while (cin >> s && s != "end")
      addresses.push_back(s);

   int Q;
   cin >> Q;
   cin.ignore();

   auto cur = addresses.begin();

   while (Q--)
   {
      string cmd;
      getline(cin, cmd);
      if (cmd.substr(0, 5) == "visit")
      {
         string addr = cmd.substr(6);
         bool found = false;

         for (auto it = addresses.begin(); it != addresses.end(); it++)
         {
            if (*it == addr)
            {
               cur = it;
               cout << *cur << endl;
               found = true;
               break;
            }
         }
         if (!found)
            cout << "Not Available\n";
      }
      else if (cmd == "prev")
      {
         if (cur != addresses.begin())
         {
            cur--;
            cout << *cur << endl;
         }
         else
         {
            cout << "Not Available\n";
         }
      }
      else if (cmd == "next")
      {
         if (next(cur) != addresses.end())
         {
            cur++;
            cout << *cur << endl;
         }
         else
         {
            cout << "Not Available\n";
         }
      }
   }

   return 0;
}