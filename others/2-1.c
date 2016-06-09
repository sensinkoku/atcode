#include <stdio.h>
int main(int argc, char *argv[])
{
  char c;
  int ch = 0, line = 0, alp = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      line++;
    }
    if (('a' <= c && c <= 'z')|| ('A' <= c && c <= 'Z')) {
      alp++;
    }
    ch++;
  }
  printf("character = %d\n",ch);
  printf("newline = %d\n",line);
  printf("alphabet = %d\n",alp);
  return 0;
}
