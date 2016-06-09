#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 28;

int n, p;
pair <int, int> s[5000];

int dp[5101];

int main() {
	scanf("%d %d", &n, &p);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &s[i].first, &s[i].second);
	}
	sort(s, s+n, greater<pair<int, int> >());
	
	int res = 0;
	for (int i = 0;i < n; i++) {
		int w = s[i].first;
		int v = s[i].second;
		for (int j = p; j >= 0; j--){
			dp[j + w] = max(dp[j + w], dp[j] + v);
			}
			res = max(res, dp[p + w]);
	}
	printf("%d\n", res);
}







