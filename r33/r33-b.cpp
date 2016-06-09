#include <bits/stdc++.h>
using namespace std;
int main() {
  int na, nb;
  cin >> na >> nb;
  set <int> gross;
  for (int i = 0; i < na + nb;i++) {
    int t;
    cin >> t;
    gross.insert(t);
  }
  cout <<(double)(na + nb - gross.size() )/(double)gross.size() <<endl;



}
