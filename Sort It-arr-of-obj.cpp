#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
   string name;
   int cls, ID, math_marks, eng_marks;
   char sec;
};

bool comp(Student l, Student r)
{
   return l.math_marks + l.eng_marks == r.math_marks + r.eng_marks ? l.ID < r.ID : l.math_marks + l.eng_marks > r.math_marks + r.eng_marks;
}

int main()
{
   int n;
   cin >> n;
   Student arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].ID >> arr[i].math_marks >> arr[i].eng_marks;
   }

   sort(arr, arr + n, comp);

   for (int i = 0; i < n; i++)
   {
      cout << arr[i].name << " " << arr[i].cls << " " << arr[i].sec << " " << arr[i].ID << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
   }

   return 0;
}