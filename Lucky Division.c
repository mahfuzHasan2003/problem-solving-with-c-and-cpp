#include <stdio.h>

int lucky[1000];
int cnt = 0;

void generate_lucky(int num)
{
   if (num > 1000)
      return;

   if (num != 0)
      lucky[cnt++] = num;

   generate_lucky(num * 10 + 4);
   generate_lucky(num * 10 + 7);
}

int main()
{
   int n;
   scanf("%d", &n);

   generate_lucky(0);

   for (int i = 0; i < cnt; i++)
   {
      if (n % lucky[i] == 0)
      {
         printf("YES");
         return 0;
      }
   }

   printf("NO");
   return 0;
}
