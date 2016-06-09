#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {	
	int n;
	int k;
	cin >> n >> k;
	ll s[n];
	for (int i = 0;i < n;i++) {
		cin  >> s[i];
		if (s[i] == 0) {
		cout << n <<"out"<< endl;
		return 0;
		}
		}
	ll ans = 1;
	int res = 0;
	for (int i = 0, j = 0; j < n && ans < k; j++) {
		ans *= s[j];
		while (ans > k) {
			ans /= s[i];
			i++;
		}
		res = max(res, j - i + 1);
	
	
	}
	cout << res << endl;
	return 0;
}