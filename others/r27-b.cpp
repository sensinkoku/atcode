#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

using namespace std;
int main() {
  int n;
  cin >> n;
  bool kaku[n];
  bool roma[26];
  string a, b;
  scanf("%s %s", a, b);
  for (int i = 0; i < n; i++) {
    if(0 <= a[i] && a[i] <= '9'){
      kaku[i] = true;
      if(!('0' <= b[i] && b[i] <= '9')) roma[b[i] - 'a'] = true;
    }
    if(0 <= b[i] && b[i] <= '9'){
      kaku[i] = true;
      if(!('0' <= a[i] && a[i] <= '9')) roma[a[i] - 'a'] = true;
    }
    }
  bool change = false;
  for (int i = 0;;i++) {
    if(kaku[i]) continue;
    if(roma[a[i] - 'a']) {kaku[i] = true; roma[b[i] - 'a';change = true;};
      if(roma[b[i] - 'a']) {kaku[i] = true; roma[a[i] - 'a';change = true;};
	if(!change) break;
      }
      
      int res = 1;
      if(!kaku[0]) {
	res *= 9;
	  for (int i = 0;;i++) {
    if(kaku[i]) continue;
    if(roma[a[i] - 'a']) {kaku[i] = true; roma[b[i] - 'a'; change = true;}
      if(roma[b[i] - 'a']) {kaku[i] = true; roma[a[i] - 'a';change = true;}
	if(!change) break;
      }
    }
      for (int i = 0; i < n; i++) {
	if(kaku[i]) continue;
	

}

  return 0;
}
