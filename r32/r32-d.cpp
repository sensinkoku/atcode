#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int fi[3001][3001];
ll mod = 1e9+7;
bool check(int size, int kazu){
  int a, b, c, d;
      for(int i = 0; i + size <= 3001; i++){
      for(int j = 0; j + size <= 3001; j++){	
	  if (i == 0 || j == 0) a = 0;
	  else a = fi[i-1][j-1];
	  if(i == 0) c = 0;
	  else c = fi[i-1][j + size-1];
	  if(j == 0) b = 0;
	  else b = fi[i+size-1][j-1];
	  d = fi[i + size -1][j + size -1];
	  if((d-c-b+a) >= kazu) return true;
      }
    }
      return false;
}
ll ncr(int n, int r, ll *gen, ll* gyakugen) {
  if (r <= 0 || r > n || n-1 < 0) return 0;
  if (n == r) return 1;
  ll res =  gen[n-1]/(gen[r-1]*gen[n-r-1]);
  res %= mod;
  return res;
  //  ll res = gen[n-1] * gyakugen[r-1] * gyakugen[n-r-1];
  //  res %= mod;
  //  return res;
  
}

ll mod_pow(int a, int b) {
  int res = 1;
  for (int i = 0; i < 32;i++) {
    if((b & (1 << i)) != 0){
      res *= a;
      res %= mod;
    }
    a*=a;
    a%=mod;
  }
  return res;


}

int main(){
  int n, k;
  scanf("%d%d", &n, &k);
  for (int i = 0; i < n; i++) {
    int a, b;
    scanf("%d%d", &a, &b);
    fi[a][b]++;
}
  for (int j = 0; j <= 3000; j++){
  for (int i = 1; i <= 3000; i++){
    fi[i][j] += fi[i-1][j];
  }
  }
  for(int i = 0; i <= 3000; i++){
  for (int j = 1; j <= 3000; j++){
    fi[i][j] += fi[i][j-1];
  }
  }
  cout << "ok1" << endl;
  int h = 3000, l = 1, mid;
  while(l+1 <  h){
    mid = (h + l)/2;
    if(check(mid, k)) h = mid;
    else l = mid;
      cout << mid << endl;
  }
  cout << mid << endl;

  //ここでn!の元と逆元を保存する
  ll gen[n];
  ll gyakugen[n];

    cout << "ok2" << endl;
  
  for (int j = 0; j < n; j++) gen[j] = 1;
   for (int j = 0; j < n; j++) gyakugen[j] = 1;
  for (int i = 1; i <= n; i++){
    gen[i-1] *= i;
    gen[i-1] %= mod;
}
  
    cout << "ok3" << endl;
    //here errored
  gyakugen[n-1] = mod_pow(gen[n-1],1e9+5);
  for (int i = n-1; i >= 1; i--) {
    gyakugen[i-1] = gyakugen[i] * (i+1) % mod;
  }

  cout << "ok4" << endl;
  
  ll res = 0;
  int size = mid;
  ll gross, corner, up, left;
  int a, b, c, d;
  for (int i = 0; i+size <= 3001; i++){
    for (int j = 0; j+size <= 3001; j++){
      	  if (i == 0 || j == 0) a = 0;
	  else a = fi[i-1][j-1];
	  if(i == 0) c = 0;
	  else c = fi[i-1][j + size-1];
	  if(j == 0) b = 0;
	  else b = fi[i+size-1][j-1];
	  d = fi[i + size -1][j + size -1];
	  gross = d-c-b+a;
	  corner = fi[i][j];
	  left = fi[i][j+size-1] - fi[i][j];
	  up = fi[i+size -1][j] - fi[i][j];
	  if (gross >= k){
	  ll pat1 = ncr(gross, k, gen, gyakugen) - ncr(gross - corner, k, gen, gyakugen);
	  ll pat2 = ncr(gross-corner, k, gen, gyakugen) - ncr(gross - corner -up, k, gen, gyakugen)
	    -ncr(gross - corner -left, k, gen, gyakugen) + ncr(gross - corner -(up + left), k, gen, gyakugen);
	  res += (pat1 + pat2) % mod;
	  }
    }
  }
  cout << res << endl;

}
