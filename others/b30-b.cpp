#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	double ta, tyo;
	tyo = m;
	ta = (n % 12 + tyo / 60) * 30;
	tyo = m * 6;
	double ans;
	ans = abs(tyo - ta);
	if (ans > 180) ans -= 180;
	cout << ans << endl;
	return 0;
}