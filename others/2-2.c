#include <stdio.h>
#define CHECKBIT(a, b)  ((a & (0x1 << b)) ? 1 : 0)
#define SETBIT(a, b)\
do  {						\
  a = (a | (0x1 << b));\
} while (0)
int main(int argc, char *argv[])
{
  int f, s;
  scanf("%d%d", &f, &s);
  if (CHECKBIT(f, s)) {
    printf("%d\n", f);
  }else {
    printf("SETBIT\n");
    SETBIT(f, s);
    printf("%d\n", f);
  }
  return 0;
}
