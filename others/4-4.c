#include <stdio.h>
#include <stdlib.h>
#define MAX 1024
int main(int argc, char *argv[])
{
  if (argc < 3) {
    printf("error\n");
    exit(1);
  }
  FILE** fpp;
  if(fpp = (FILE **)malloc(sizeof(FILE *) * argc - 1) == NULL){
    printf("error\n");
    exit(2);
  }
  int i;
  for (i = 1; i < argc - 1; i++) {
    if (fpp[i] = fopen(argv[i], "r") == NULL) {
      printf("error\n");
      exit(3);
    }
  }
    if (fpp[argc - 1] = fopen(argv[argc - 1], "w") == NULL) {
     printf("error\n");
     exit(4);
    }
  char c[MAX];
  for (i = 1; i < argc - 1; i++) {
    while (c != '\n' && c != EOF) {
      
    }
    fgetc(fpp[i], c)
  }

  return 0;
}
