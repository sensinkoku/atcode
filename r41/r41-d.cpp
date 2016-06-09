#include <bits/stdc++.h>
using namespace std;
int N, M;
vector <pair<int, int> > con[2101];
int C[2101], H[2101];

bool dfs (int n, int k, int &cnt) {
	C[n] = k;
	for (auto &p : con[n]) {
		int t = p.first, c = p.second;
		if (k != c) continue;
		cnt++;
		if (H[t]) {
			if(C[t] != !k) return 1;
			} else {
				H[t] = H[n] + 1;
				if (dfs(t, !k, cnt)) return 1;
	}
}
return 0;
}








int main() {
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= M; i++) {
		int a, b;
		char c;
		scanf("%d %d %c", &a, &b, &c);
		con[a].push_back(make_pair(b, c == 'r'));
		con[b].push_back(make_pair(a, c == 'r'));
		}
	
		for (int i = 1; i <= N; i++) {
			for (int j = 0; j < 2; j++) {
				for (int k = 1; k <= N; k++) C[k] = -1, H[k] = 0;
				H[i] = 1;
				int cnt = 0;
				if (dfs(i, j, cnt) || cnt == M){
					puts("Yes");
					return 0;
				}
			
			
			}
		
		
		}
	puts("No");
}



