#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
typedef long long ll;
ll mod = 1e9+7;
using namespace std;

int main() {
 ll a, b;
 cin >> a >>  b;
 ll res = 1;
 for (ll j = b + 1; j <= a; j++){
    ll t = 0;
    for (int i = 1; i*i <= j;i++) {
               int amari = j % i;
               if (amari == 0) {
                   if(i * i == j) t += 1;
                   else t += 2;
                   }
            }
cout << t <<endl;
    res *= t;
    res %= mod;
}
cout << res << endl;
  return 0;
}
