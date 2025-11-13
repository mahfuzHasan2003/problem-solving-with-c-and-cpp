#include <stdio.h>
#include <stdlib.h>

int get_minimum_moves(int a[5][5])
{

   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         if (a[i][j] == 1)
         {
            return abs(2 - i) + abs(2 - j);
         }
      }
   }
}

int main()
{
   int a[5][5];
   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         scanf("%d", &a[i][j]);
      }
   }

   printf("%d", get_minimum_moves(a));
}