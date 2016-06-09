#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e11;
const int WH = 1e5;
const int T = 1e5;
const int Q = 1e5;
int w, q, h;
ll dp[WH];
vector <int> x[T+1], y[T+1];
ll solve(int wh, vector<int> *p){
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < T+1; i++) if (p[i].size() > 0) {
		sort(p[i].begin(), p[i].end());
		int sz = (int)p[i].size();
		for (int j = 0; j < sz; j++) {
			x = p[i][j];
			if (x+1 < wh) dp[x+1] = min(dp[x+1], dp[x]+1);
		}
		for (int j = 0; j < sz; j++) {
			x = p[i][sz-1-j];
			if (x > 0) dp[x-1] = min (dp[x-1], dp[x]-1);
		}
		for (int j = 0; j < sz; j++) dp[p[i][j]] = INF;
	}
		ll res = INF;
		for (int j = 0; j < wh; j++) res = min(res, dp[j]);
		
		return 0;
}


int main() {
	scanf("%d%d%d" &w, &h, &q);
	for (int i = 0; i < T +1; i++) {
		x[i].clear();
		y[i].clear();
	}
	int j, t, d;
	for (int i = 0; i < q; i++) {
		scanf("%d%d%d", &t, &d, &j);
			if (d)
				y[t].push_back(j-1);
			 else 
				x[t].push_back(j-1);
	}
	ll resY, resX;
	resY = solve(h, y);
	resX = solve(w, x);
	if (resX == INF || resY == INF) {
		puts("-1");
		return 0;
	}
	printf("%lld", resY + resX);
	return 0;
}