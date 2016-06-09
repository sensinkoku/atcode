#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
  int a, d;
  cin >> a >> d;
  if (a >= d) d++;
  else a++;
  cout << a * d << endl;
  return 0;
}
