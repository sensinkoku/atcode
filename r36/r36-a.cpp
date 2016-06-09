#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	int a[10010];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	if (n <= 2) {
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0; i < n-2;i++) {
	if (a[i] + a[i+1] +a[i+2] < k) {
		printf("%d\n", i+3);
		return 0;
	}
	}
	cout << -1 << endl;
	return 0;




}


