#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pr;
typedef pair <pr, int> ppr;

vector <ppr> a;
int n;
int dp[1000010];
int id[1000010];
int a[100000], b[100000];

int main(){
  cin >> n;
  for (int i = 0; i < n; i++) {
    scanf("%d%d", &a[i], &b[i]);
}
  id[1000010] = n;
  for(int i = 0; i < n; i++) {
    a.push_back(ppr(pr(a[i], b[i]), i));
}
  sort(a.rbegin(), a.rend());
  int cur = 0;
  for (int i = 1000000; i >= 0; i--) {
    dp[i] = dp[i+1];
    id[i] = id[i+1];
    




}
  
}
