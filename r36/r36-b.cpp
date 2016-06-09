#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int count, state, height, before;
	state = 0;
	cin >> before;
	count = 1;
	int m = 1;
	for (int i = 1; i < n; i++) {
		cin >> height;
		if (height > before) {
			if (state == 1) {
				count++;
			}else{
				count = 2;
				state = 1;
			}
		} else  if(height == before){
			state = 0;
			count++;
		} else if(height < before) {
			state = 2;
			count++;
		}
		m = max(m, count);
		}
		cout << m <<endl;

}
