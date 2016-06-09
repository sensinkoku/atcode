#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

int main() {
  ll n;
  cin >> n;
  int res;
  int res2[n];
  for (int i = 171; i >= 0; i--) {
    if(i >= n) continue;
    int wa = 0;
    ll x = n-i;
    ll daikou = x;
    while (daikou  > 0) {
      wa += (daikou) % 10;
      daikou /= 10;
    }
    if(wa == i) {res2[res] = x; res++;}
}
      cout << res << endl;
  for (int i = 0; i < res; i++) {
    cout << res2[i] << endl;

}
  return 0;
}
