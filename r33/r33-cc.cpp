#include <bits/stdc++.h>
using namespace std;
#define SIZE 200005
#define BT 256*1024*2
struct segtree {
	int seg[BT];
	int mem;
	void init() {
		mem  = 1;
		while (mem < SIZE) mem <<= 1;
		for (int i = 0; i < mem; i++) seg[i] = 0;
	}
	void add(int a, int b) {
		a += mem-1;
		seg[a] += b;
		while(a > 0) {
			a = (a-1)/2;
			seg[a] += b;
		}
	}
	
	int sum(int lim) {
		int l = 0, h = mem, m, k = 0;
		while(l + 1 < h) {
			m = (h + l) / 2;
			if (lim <= seg[k*2 + 1]) {
				h = m;
				k = k * 2 + 1;
			} else {
				lim -= seg[k * 2 + 1];
				l = m;
				k = k * 2 + 2;
			}	
		}
		return l;
	}
};

segtree seg;
int main() {
	seg.init();
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int t, x;
		scanf("%d %d", &t, &x);
		if (t == 1) seg.add(x, 1);
		else {
			int q = seg.sum(x);
			seg.add(q, -1);
			printf("%d\n", q);
		}
	}
}