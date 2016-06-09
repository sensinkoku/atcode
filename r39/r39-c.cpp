#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	string s;
	cin >> n >> s;
	map <int,  map <int, vector <int> > > g;
	g[0][0] = {-1, 1, 1, -1}; //LRUD
	int r = 0, c = 0;
	for (int i = 0; i < n; i++) {
		int pr = r, pc = c;
		switch(s[i]) {
			case 'R' :
				c++;
				while(g[r][c]) c = g[r][c][1];
				g[r][c] = {pc-1, c+1, r+1, r-1};
				g[pr][pc][1] = c+1;
				break;
			case 'L':
				c--;
				while(g[r][c]) c = g[r][c][0];
				g[r][c] = {c+1, pc+1, r+1, r-1};
				g[pr][pc][2] = c-1;
				break;
			case 'U' :
				r++;
				while(g[r][c]) r = g[r][c][2];
				g[r][c] = {c-1, c+1, r+1, pr-1};
				g[pr][pc][0] = c-1;
				break;
		}
	
	
	}






}