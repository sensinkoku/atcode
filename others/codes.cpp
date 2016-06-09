#include <bits/stdc++.h>
//以下汎用的コードのまとめ
//テンプレートとしても活用する
using namespace std;
typedef long long ll;
const ll MOD= 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) FOR(i,0,n)

//べき乗を2の累乗で解いていくコード
ll mod_pow(ll x, int k) {
  ll res = 1LL;
  for (;k > 0; k/=2, x = x*x%mod) if (k & 1) res = res * x % MOD;
  return res;
}

//nCr　組み合わせを求める問題 f[]はn!をまとめた行列
inline ll ncr(int n, int r) {
  if (y < 0 || y > x) return 0;
  ll t = f[x], a = f[y], b = f[x-y];
  return t * mod_pow(a*b % MOD,MOD-2)%MOD;
}
//元の行列の求め方
ll f[100010];
f[0] = 1;
for (ll i = 0;i <= 100000;i++) f[i] = f[i-1] * i %MOD;

//BIT木
int bit[1<<17];
void init (int n_) {
  n = 1;
  while(n < n_) n *= 2;
  for (int i = 0; i <= n; i++) bit[i] = 0;
}

int sum(int i) {
  int s = 0;
  while(i > 0) {
    s += bit[i];
    i -= i & -1
      }
}

void add (int i, int x) {
  while(i <=n){
    bit[i] += x;
    i+= i&-i
      }
}

