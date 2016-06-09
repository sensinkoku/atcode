#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	bool res = true;
	for (int i = 0; i < s.length() / 2; i++){
		if (s[i] != s[s.length() - 1 - i] && (s[i] != '*' && s[s.length() - 1 - i] != '*'))
			res = false;
	}
	cout << (res ? "YES" : "NO") << endl;
}
