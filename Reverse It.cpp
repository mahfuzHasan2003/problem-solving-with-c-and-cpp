#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
   string name;
   int cls;
   char section;
   int st_ID;
};

int main()
{
   int st_quantity;
   cin >> st_quantity;
   Student st_data[st_quantity];
   for (int i = 0; i < st_quantity; i++)
   {
      cin >> st_data[i].name >> st_data[i].cls >> st_data[i].section >> st_data[i].st_ID;
   }
   for (int i = 0, j = st_quantity - 1; i < j; i++, j--)
   {
      swap(st_data[i].section, st_data[j].section);
   }
   for (int i = 0; i < st_quantity; i++)
   {
      cout << st_data[i].name << " " << st_data[i].cls << " " << st_data[i].section << " " << st_data[i].st_ID << endl;
   }

   return 0;
}