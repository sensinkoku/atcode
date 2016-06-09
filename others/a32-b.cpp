#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int k;
	cin >> s >> k; 
	set <string> buf;
	for (int i = 0; i < s.length() -k +1;i++) {
		buf.insert(s.substr(i, k));
	}
	cout << buf.size() << endl;
	return 0;
}