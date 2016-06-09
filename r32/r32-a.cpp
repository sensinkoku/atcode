#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int l = (n+1) * n / 2;
  int j = 0;
  for (int i = 1; i*i <= l; i++) {
    if(l % i) j = 1;
  }
  if(j) cout << "BOWWOW" << endl;
  else cout << "WANWAN" << endl;
  return 0;
}
