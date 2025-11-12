#include <stdio.h>
#include <stdlib.h>

int absolute_difference(int N, int A[N][N])
{
   int primary_diagonal = 0, secondary_diagonal = 0;
   for (int i = 0; i < N; i++)
   {
      primary_diagonal += A[i][i];
      secondary_diagonal += A[i][N - 1 - i];
   }

   return abs(primary_diagonal - secondary_diagonal);
}

int main()
{
   int N;
   scanf("%d", &N);
   int A[N][N];
   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < N; j++)
      {
         scanf("%d", &A[i][j]);
      }
   }

   printf("%d", absolute_difference(N, A));
}