#include <bits/stdc++.h>
using namespace std;
int H, W;
int memo[500][500];
string maze[101];
int rec(int y, int x) {
	if (memo[y][x] != -1) return memo[y][x];
	int res = 0;
	if (x+1 < W && maze[y][x+1] != '#' && rec(y, x+1) == 0)
		res = 1;
	if (y+1 < H && maze[y+1][x] != '#' && rec(y + 1, x) == 0)
		res = 1;
	if (x + 1 < W && y+1 < H && maze[y+1][x+1] != '#' && rec(y+1, x+1) == 0)
		res = 1;
	return memo[y][x] = res;
}

int main() {
	memset(memo, -1, sizeof(memo));
	cin >> H >> W;
	for (int i = 0; i < H; ++i) cin >> maze[i];
	if (rec(0, 0)) cout << "First" << endl;
	else cout << "Second" << endl;
	return 0;
}
