#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int ac, bc;
	if (a < 900) ac = a % 100 + 900;
	else if (a < 990) ac = a % 10 + 990;
	else ac = 999;
	if (b >= 200) bc = b % 100 + 100;
	else if (b >= 110) bc = b % 10 + 100;
	else bc = 100;
	cout << max (ac - b, a - bc) << endl;
	return 0;


}