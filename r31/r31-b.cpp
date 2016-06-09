#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) FOR(i,0,n)
char fe[10][10];
int ch[10][10];

bool check() {
  rep(i,10)rep(j,10){
  }
}
void dfs (int i, int j) {
  if(fe[i][j] == 'x' || ch[i][j] ==1 || i < 0 || 10<=i || j<0||10<=j) return;
  else{
    ch[i][j] = 1;
    dfs(i-1, j);
    dfs(i+1, j);
    dfs(i, j-1);
    dfs(i, j+1);
}


}



int main() {
  rep(i,10){
    scanf("%s", fe[i]);
}
  bool f;
  rep(i,10)rep(j,10){
    if(fe[i][j] == 'x') {
      fe[i][j] = 'o';
      f = true;
      memset(ch, 0, sizeof(ch));
      dfs(i, j);
      rep(k,10)rep(d,10) if(fe[k][d] == 'o' && ch[k][d] == 0){f = false;}
      fe[i][j] = 'x';
      if(f) {puts("Yes"); return 0;}
    }
  }
      if(f) {puts("Yes"); return 0;}
      else puts("No");

}

