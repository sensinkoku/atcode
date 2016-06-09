#include <stdio.h>
int main(int argc, char *argv[])
{
  int defl = 10;
  int argnum, flug = 0;
  FLIE* fp;
  if (argv[1][0] == '-') {
    defl = - (*argv[1]);
    flug = 1;
  }
  argnum = argc - 1 -flug;
  
  fp = fopen(argv[], "r");

  return 0;
}
