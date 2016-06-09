#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	scanf ("%d %d", &n, &m);
	int *d = new int [m];
	for (int i = 0; i < m; i++) {
		scanf("%d", d+i);
		}
		bool* w = new bool [n];
		for (int i = 0; i < n; i++) {
		w[i] = true;
		}
		for (int i = m-1;i >= 0; i--) {
			if(w[d[i] - 1]) {
				printf("%d\n", d[i]);
				w[d[i] - 1] = false;
			}
		 }
		 for (int i = 0; i < n; i++) {
			if (w[i]) {
				printf("%d\n", i+1);		
			}
		 
		 }


}





