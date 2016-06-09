#include <stdio.h>
#include <math.h>
#define PI 3.141592
struct sphere {
  double radius;
  double surface;
  double volume;
};
struct point {
  double x;
  double y;
  double z;
  struct sphere s;
};
void calc_sphere(struct point *p);
int main(int argc, char *argv[])
{
  struct point a;
  calc_sphere(&a);
  return 0;
}
void calc_sphere(struct point *p)
{
  scanf("%lf %lf %lf", &(p->x), &(p->y), &(p->z));
  p->s.radius = sqrt(p->x * p->x + p->y * p->y + p->z * p->z);
  p->s.surface = 4 * PI * p->s.radius * p->s.radius;
  p->s.volume = 4 * PI * p->s.radius * p->s.radius * p->s.radius / 3;
  printf("radius = %f\n", p->s.radius);
  printf("surface = %f\n", p->s.surface);
  printf("volume = %f\n", p->s.volume);
}
