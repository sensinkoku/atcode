#include <iostream>
using namespace std;
int cs[1<<20];
const int X = 1e9+7;
typedef long long  ll;
ll pw(ll b, ll x) {
	ll ret = 1;
	while (0 < x) {
		if(x & 1) ret = ret * x % Z;
		x = x * x % Z;
		n >>=1;
	}
	return ret;
}
int main() {
	int n;
	cin >> n;
	int big = 0;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		++cs[x];
		if (i == 0 && x) {
			cout << 0 << '\n';
			return 0;
		}
		big = max(big, x);
	}
	if(cs[0] > 1) {
		cout << 0 << '\n';
		return 0;
	}
	ll res = 1;
	for (int i = 0; i < big; ++i) {
		ll a = cs[i];
		ll b = cs[i+1];
		res *= pw(pw(2,a)-1,b);
		res %= Z;
		res *= pw(2, b*(b-1)/2);
		res %= Z;
	}
	cout << res << '\n';
}
