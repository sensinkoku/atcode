#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
typedef long long ll;
ll mod = 1e9+7;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector <int> t(n);
  rep(i, n) cin >> t[i];
  sort(t.begin(), t.end());
  ll rest = 0, resp = 1;
  int te = 0;
  for (int i = 0; i < n;) {
    int j;
    for (j = i;t[i] == t[j] && j < n;j++);
    for (; i < j && i < n;i++){
      te += t[i];
      cout << "tes" << endl;
      cout << te << endl;
      rest += te;
      resp *= (j-i);
      resp %= mod;
    }
  }
  cout << rest << endl << resp << endl;
  return 0;
}
