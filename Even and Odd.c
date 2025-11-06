#include <stdio.h>

void odd_even(int N, int A[])
{
   int even = 0, odd = 0;
   for (int i = 0; i < N; i++)
   {
      A[i] % 2 == 0 ? even++ : odd++;
   }
   printf("%d %d", even, odd);
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
   odd_even(N, A);
}