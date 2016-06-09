#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
int k, n;
string v[55], w[55];
string ans[9];

bool check(int a[9]){
  rep(i,n) ans[i] = "";
  bool ok = true;
  rep(i,n) {
    string cur = "";
    for(auto &c:v[i]){//size of string and this loop indicate use each charas
      int d=c -'1';//d is numbers used in 1~9 this point change char to int 
    if(ans[d]==""){
      if(cur.size()+a[d] <= w[i].size())// a is the length of parts 1~3
	ans[d]=w[i].substr(cur.size(),a[d]);//if size are all OK, that's answer
      else//cur.size point the place
	ok =false;
    }
    cur += ans[d];
  } 
    if(cur != w[i]) ok =false;//check total length
  if(!ok) break;
}

  return 0;
}

bool dfs(int d, int a[9]){
  if(d == k){
    bool ok = check(a);
    if(ok) rep(i,k) cout << ans[i] << endl;
    return ok;
}
  for(int i=1; i<=3;++i){
    a[d]=i;
    if(dfs(d+1,a)) return true;
  }
  return false;
}







int main(int argc, char *argv[])
{
  cin >> k >> n;
  rep(i,n) cin >> v[i] >> w[i];
  int a[9];
  dfs(0, a);
  return 0;
}
