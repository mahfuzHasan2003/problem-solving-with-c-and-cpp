#include <stdio.h>

long long summation_with_recursion(int N, int A[])
{
   if (N == 0)
   {
      return A[0];
   }

   return A[N] + summation_with_recursion(N - 1, A);
}

int main()
{
   int N;
   scanf("%d", &N);
   int A[N];
   for (int i = 0; i < N; i++)
   {
      scanf("%d", &A[i]);
   }
   printf("%lld", summation_with_recursion(N - 1, A));
}