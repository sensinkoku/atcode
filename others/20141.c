#include <stdio.h>
int main(int argc, char *argv[])
{
  int num[26], i;
  char c;
  for (i = 0; i < 25; i++) {
    num[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if ('a' <= c && c <= 'z') {
      num[c-'a']++;
    }
    if ('A' <= c && c <= 'Z') {
      num[c-'A']++;
    }
  
  }
  for (i = 0; i < 25; i++) {
    if (num[i] != 0) {
      printf("%c : %d\n", 'a'+i, num[i]);
    }
  }

  return 0;
}
