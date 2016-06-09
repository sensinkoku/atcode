#include <stdio.h>
#define strodd(src, dst) do\
{\
  int i = 0, j = 0;\
  while (src[i] != '\0') {\
    if (i % 2 == 0){\
      dst[j] = src[i];\
      j++;\
    }\
    i++;\
  }\
  dst[j] = '\0';\
} while (0)
#define streven(src, dst) do{\
    int i = 0, j = 0;\
  while (src[i] != '\0') {\
    if (i % 2 == 1){\
      dst[j] = src[i];\
      j++;\
    }\
    i++;\
  }\
  dst[j] = '\0';\
}while(0)
#define MAX 1024
  int main(int argc, char *argv[])
  {
    char c[1024], r[1024];
    #if defined(TRANS_ODD)
    printf("Trans odd:");
    scanf("%s", c);
    strodd(c, r);
    printf("%s\n", r);
    #elif defined(TRANS_EVEN)
    printf("Trans even:");
    scanf("%s", c);
    streven(c, r);
    printf("%s\n", r);
    #else
    printf("No trans:");
    scanf("%s", c);
    printf("%s\n", c);
    #endif
    return 0;
  }
