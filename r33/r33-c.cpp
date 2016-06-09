#include <bits/stdc++.h>
using namespace std;
int main() {
  int q;
  cin >> q;
  int num = 0;
  vector<int> v;
  for (int i = 0; i < q; i++) {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 1) {
      v.push_back(b);
    }else if(a == 2) {
      sort(v.begin(), v.end());
      printf("%d", v[b-1]);
      v[b-1] = 2000001;
	}
  }
}
