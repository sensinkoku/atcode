#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll kaijyo (int a, int b) {
	int c = a + b;
	ll mod = 1e9+7;
	ll res = 1;
	for (int i = 0; i < b; i++) {
	 res *= --c;
	 res /= i+1;
	 res %= mod;
	}
	return res;
}

int main() {
	int n, k;
	cin >> n >> k;
	ll ans;
	if  (n > k) ans = kaijyo(n, k);
	else if (k % n == 0) ans = 1; 
	else {
		k = k % n;
		ans = kaijyo (n, k);
	}
	cout << ans << endl;
	return 0;
}
