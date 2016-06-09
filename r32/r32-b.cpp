#include <bits/stdc++.h>
using namespace std;
int n, m;
vector <int> a[100010];
int used[100010];
void dfs(int t){
  used[t] = 1;
  for(int x = 0; x < a[t].size();x++) {
    if(!used[a[t][x]]) dfs(a[t][x]);
  }
}
  
int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int ta, tb;
    scanf("%d%d", &ta, &tb);
    a[tb-1].push_back(ta-1);
    a[ta-1].push_back(tb-1);
  }
  dfs(0);
  int res = 0;
  for(int i = 0; i < n;i++) {
    if(!used[i]) {
      dfs(i);
      res++;
    }
  }
  cout << res << endl;
}
