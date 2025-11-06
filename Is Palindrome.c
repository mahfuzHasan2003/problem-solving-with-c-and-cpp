#include <stdio.h>
#include <string.h>

int is_palindrome(char S[])
{
   int char_len = strlen(S);
   for (int i = 0, j = char_len - 1; i < j; i++, j--)
   {
      if (S[i] != S[j])
      {
         return 0;
      }
   }
   return 1;
}

int main()
{
   char S[1000];
   scanf("%s", S);
   int ans = is_palindrome(S);
   printf(ans == 1 ? "Palindrome" : "Not Palindrome");
}