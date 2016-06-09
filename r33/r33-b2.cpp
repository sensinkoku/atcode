#include <bits/stdc++.h>
using namespace std;
int main () {
  int na, nb;
  cin >> na >> nb;x
  int a[na], b[nb];
  for (int i = 0; i < na; i++) {
    scanf("%d", &a[i]);
}
  for (int j = 0; j < nb; j++) {
    scanf("%d", &b[j]);
}
  sort(a, a + na);
  sort(b, b + nb);
  int pa = 0, pb = 0;
  int res = 0;
  while (pa < na && pb < nb) {
    if(a[pa] > b[pb]) pb++;
    else if(a[pa] ==  b[pb]) {
      res++;
      pa++;
      pb++;
    }else if(a[pa] < b[pb]) pa++;
}
  cout << res << endl;
}

