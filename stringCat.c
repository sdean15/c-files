#include <stdio.h>


int strLen(char s[])
{
    int a = 0;

    while(s[a] != '\0')
        a++;

    return a;
}

char *cat(char *a, char *b) {
  int i = 0, j = 0;
  int cont = 0;
  int h = strLen(a) + strLen(b) + 1;

  char *result = (char*)malloc(h);

  for(i = 0; i < strLen(a); i++) {
    result[i] = a[i];
  }

  for(j = i; j < h - 1; j++) {
    result[j] = b[cont++];
  }

  // append null character
  result[h - 1] = '\0';
  return result;
}

int main() {
   const char *firstString = "Hello";
   const char *secondString = " world";
   char *combined = cat(firstString, secondString);

   printf("%s", combined);

   free(combined);
   return 0;
}
