#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define o(x) cout<<x<<endl
using namespace std;
typedef long long ll;
ll mod = 1e9+7;
int main() {
  ll a, b;
  scanf("%lld %lld", &a, &b);
  //int k;
  //for (k = 0; k * k < a; k++){};
  //cout << k << endl;
  o("ok1");
  int ren[a];
  o("ok2");
  for (ll ls = 0; ls <= a; ls++) ren[ls] = 0;
  o("oka");
  //printf("%d\n", ren[2]);
  for (ll j = b+1; j <= a;j++) {
    //bool sosuu = true;
    ll n = j;
    for (ll i = 2; i <= j;i++) {
      if(n == 1) break;
      else if (n % i != 0) continue;
      else {ren[i]++; n /= i; i--;}
    }
   }
  ll res = 1;
  o(a);
  o("start");
  //o(k);
  //for(int i = 0; i <= a; i++) o(ren[i]);
  //o(sosu);
  o("end");
  for (ll i = 2; i <= a; i++) {
    if(ren[i]) {res *= (ren[i] + 1); res %=mod;}
}
  //for (;sosu > 0;sosu--) {res *= 2; res %= mod;}
  printf("%lld\n", res);
  return 0;
}
