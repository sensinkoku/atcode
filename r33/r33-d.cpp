#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1e9+7;
ll p[100100];
ll q[100100];
double c[100100];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i <= n; i++) {
    scanf("%lld", &p[i]);
  }
  ll qin = 1;
  for (int i = -1; i >= -n;i--) {
    qin *= i;
    qin %= MOD;
      }
  q[0] = qin;
  for (int i = 0; i < n;i++) {
    q[i+1] = q[i] * (i + 1) / (i - n);
    }
  c[0] = (double)p[0]/qin;
cout << "ok1" << endl;
for (int i = 1; i <=n; i++) {
  // qin *= i;
    // qin /= (i-n-1); 
  c[i] = (double)p[i]/q[i];
//c[i] %= MOD;
}
cout << "ok1" << endl;
  double res;
  ll t;
  cin >> t;
  ll bunbo = 1;
  for (int i = 0; i <=n; i++) {
    if(t == i) continue;
    bunbo *= (t-i);
    bunbo %= MOD;
  }
cout << bunbo << endl;
  if (t <= n) {
    res = bunbo*c[t];
    res %= MOD;
    cout << res << endl;
    return 0;
  }
  cout << bunbo << endl;
  for (int i = 0; i <=n; i++) {
    res += c[i] * bunbo / (t-i);
    cout << res << endl;
    res %= MOD;
  }
  cout << res << endl;
  return 0;
}
