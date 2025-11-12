#include <stdio.h>

int print_with_recursion(int n)
{
   if (n == 1)
   {
      printf("%d", 1);
      return 0;
   }

   printf("%d ", n);
   return print_with_recursion(n - 1);
}

int main()
{
   int n;
   scanf("%d", &n);

   print_with_recursion(n);

   return 0;
}