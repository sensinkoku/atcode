#include <bits/stdc++.h>
using namespace std;
vector <int> rnk(1000010);
char ans[1000010];
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		rnk[--a[i]] = i + 1;
			}
	rnk[0] = 0;
	char now = 'A';
	ans[a[0]] = now;
	for (int i = 1; i < n; i++) {
		if (rnk[a[i]+1] < rnk[a[i-1] + 1]) now++;
		ans[a[i]] = now;
		if (now > 'Z') {
			cout << -1 << "\n";
			return 0;
		}
	}
	for (int i = 0; i < n; i++) cout <<ans[i];
	cout << "\n";
	return 0;
}
