#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   int max_star = n + 10;

   // NOTE: top part
   for (int i = 0; i <= max_star / 2; i++)
   {
      for (int j = 0; j < max_star / 2 - i; j++)
      {
         printf(" ");
      }
      for (int j = 0; j < (2 * i + 1); j++)
      {
         printf("*");
      }
      printf("\n");
   }

   // NOTE: bottom part
   for (int j = 0; j < 5; j++)
   {
      for (int i = 0; i < 5; i++)
      {
         printf(" ");
      }
      for (int i = 0; i < n; i++)
      {
         printf("*");
      }
      printf("\n");
   }

   return 0;
}