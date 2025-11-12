#include <stdio.h>
#include <stdbool.h>

bool x_exists(int N, int M, int A[N][M], int X)
{
   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < M; j++)
      {
         if (A[i][j] == X)
         {
            return true;
         }
      }
   }

   return false;
}

int main()
{
   int N, M, X;
   scanf("%d %d", &N, &M);
   int A[N][M];
   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < M; j++)
      {
         scanf("%d", &A[i][j]);
      }
   }
   scanf("%d", &X);

   if (x_exists(N, M, A, X))
   {
      printf("will not take number");
   }
   else
   {
      printf("will take number");
   }
}