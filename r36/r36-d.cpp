#include <bits/stdc++.h>
using namespace std;
int N, Q, P[200001];
int find (int x) {
	if(P[x] != x) P[x] = find(P[x]);
	return P[x];
}
void uni(int x, int y) {
	x = find(x);
	y = find(y);
	P[x] = y;
}



int main() {
	cin >> N >> Q;
	for (int i = 1; i <= 2*N; i++) P[i] = i;
	for (int i = 0; i <=Q; i++) {
		int w, x, y, z;
		scanf("%d%d%d%d", &w, &x, &y, &z);
		if (w ==1) {
			if (z % 2) {
				uni (x, y + N);
				uni(x + N, y);
			}else {
				uni(x, y);
				uni(x+N, y+N);
			}
		}else{
				if(find(x) == find(y)) puts("YES");
				else puts("NO");
			}
		}
	}