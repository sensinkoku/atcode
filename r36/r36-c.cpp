#include <bits/stdc++.h>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;
	char S[999];
	cin >> S;
	static int dp[301][301][301];
	int M = 1e9 + 7;
	dp[0][0]][0] = 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0 ; j <=K; j++) {
			for (int k = 0; k <=K; k++) {
				if (dp[i][j][k]){
					if (S[i] == '0' || S[i] == '?') {
						dp[i+1][j+1][max(0, k-1)] += dp[i][j][k];
					}
					if (S[i] == '1' || S[i] == '?') {
						dp[i+1][max(0, j-1)][k] += dp[i][j][k];
					} 
				}
			}
		}
	}
	
	int ans = 0;
	for (int i = 0; i <= k; i++) {
			for (int j = 0; i <= k; j++) {
		ans += dp[n][i][m];
		ans %= MOD;
		}
	}
	cout << ans << endl;
}