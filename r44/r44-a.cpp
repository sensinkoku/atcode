#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	bool p = n > 1;
	for (int i = 2; i*i <= n; ++i) if (n%i == 0) p = 0;
	int a = n%10;
	if (n > 1 && n % 3 != 0 && a % 2 != 0 && a!= 5) p = 1;
	cout << (p?"Prime":"Not Prime") << '\n';
	return 0;
}
