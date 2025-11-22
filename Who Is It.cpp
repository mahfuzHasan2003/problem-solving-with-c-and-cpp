#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
   int ID;
   string name;
   char section;
   int marks;
};

int main()
{
   int test_cases;
   cin >> test_cases;
   for (int i = 0; i < test_cases; i++)
   {
      Student student1;
      Student student2;
      Student student3;
      cin >> student1.ID >> student1.name >> student1.section >> student1.marks;
      cin >> student2.ID >> student2.name >> student2.section >> student2.marks;
      cin >> student3.ID >> student3.name >> student3.section >> student3.marks;

      int max_marks = max({student1.marks, student2.marks, student3.marks});
      if (student1.marks == max_marks)
      {
         cout << student1.ID << " " << student1.name << " " << student1.section << " " << student1.marks;
      }
      else if (student2.marks == max_marks)
      {
         cout << student2.ID << " " << student2.name << " " << student2.section << " " << student2.marks;
      }
      else
      {
         cout << student3.ID << " " << student3.name << " " << student3.section << " " << student3.marks;
      }
      cout << endl;
   }
}