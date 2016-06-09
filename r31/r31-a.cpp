#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  char c;
  int i;
  for (i = 0;s[i] != '\0';i++) {
  }
  for(int j = 0; j < (i-1)/2;j++){
    if(s[j] != s[i-1-j]) {
      puts("No\n");
      return 0;
    }
  }
  puts("Yes\n");
  
}
