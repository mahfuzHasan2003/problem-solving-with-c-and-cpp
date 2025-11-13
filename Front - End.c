#include <stdio.h>

void rearrange_array(int n, int a[n])
{
   for (int i = 0, j = n - 1; i <= j; i++, j--)
   {
      if (i == j)
      {
         printf("%d", a[i]);
      }
      else
      {
         printf("%d %d ", a[i], a[j]);
      }
   }
}

int main()
{
   int n;
   scanf("%d", &n);
   int a[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }

   rearrange_array(n, a);
}