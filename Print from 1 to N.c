#include <stdio.h>

int print_with_recursion(int n, int start)
{
   if (start == n + 1)
      return 0;

   printf("%d\n", start);
   return print_with_recursion(n, start + 1);
}

int main()
{
   int n;
   scanf("%d", &n);

   print_with_recursion(n, 1);

   return 0;
}