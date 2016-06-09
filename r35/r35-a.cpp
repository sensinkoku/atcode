#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int n;
  n = s.length();
  for (int i = 0; i <= n/2 + 1;i++) {
    if(s[i] != s[n-1-i] && (s[i] != '*' && s[n-1-i] != '*')) {
      puts("NO");
      return 0;
    }
  }
  puts("YES");
  return 0;


}

