#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	int r = 0;
	for (int i = 0; i < n; i++) r += a[i];
	cout << r << endl;
	return 0;
}
