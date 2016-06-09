#include <bits/stdc++.h>
using namespace std;
#define SIZE 200100

struct segtree {
  int seg1[1000000];
  int n;
  void init (){
    n = 1;
    while(n < SIZE) n *= 2;
    for (int i = 0; i < n*2; i++) seg1[i] = 0;
  }
  void update(int k,int x) {
    k += n-1;
    seg1[k] += x;
    while(k > 0) {
      k = (k-1)/2;
      seg1[k] += x;
    }
}
  int pos(int x) {
    int k = 0;
    int l = 0, h = n, mid;
    while(l < h-1) {
      mid = (h+l)/2;
      if (x <= seg1[k * 2 + 1]) {
	k = k*2+1;
	h = mid;
      }else{
	x-=seg1[k*2+1];
	l = mid;
	k = k*2 + 2;
      }
    }
      return l;
  }
  



  
};
segtree seg;
int main(int argc, char *argv[])
{
  seg.init();
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 1) {
      seg.update(b, 1);
      // cout << "ok" << endl;
    }else if (a == 2){
      printf("%d\n", seg.pos(b));
      seg.update(b, -1);
      // cout << "ok2" << endl;
    }
  }

  
  return 0;
}

