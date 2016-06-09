#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> b;
  int st[n];
  for (int i = 0; i < n; i++) {
    int t;
    scanf("%d", &t);
    b.push_back(t);
    st[b[i]] = i;
  }
  cout << b[0] << endl;
  int res;
  for (int i = 0; i < n; i++) {
    int lesn = 0, larn = 0;
    for (int j = i-1; j >=0; j--){
      if(b[j] > b[i]) lesn++;
    }
    for (int j = i+1; j < n;j++){
      if(b[j] > b[i]) larn++;
    }
    res += min(lesn, larn);
  }
  cout << res << endl;
}
