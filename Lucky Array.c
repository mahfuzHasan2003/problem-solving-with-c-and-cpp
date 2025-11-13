#include <stdio.h>

int main()
{
   int n, min_el = 1000000, min_count = 0;
   scanf("%d", &n);
   int a[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
      if (a[i] < min_el)
      {
         min_el = a[i];
      }
   }

   for (int i = 0; i < n; i++)
   {
      if (a[i] == min_el)
      {
         min_count++;
      }
   }

   printf(min_count % 2 == 1 ? "Lucky" : "Unlucky");
}