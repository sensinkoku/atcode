#include <iostream>
#define MAX 51
using namespace std;
int main(int argc, char *argv[])
{
  int n;
  int retu[51];
  int takas, aokis, takap, aokip, maxtakap, maxaop;
  int bufi, bufj;

  cin >> n;
  for (int x = 0; x < n; x++) {
  cin >>  retu[x];
  }
  for (int i = 0; i < n; i++) {
    takas = i;
    for (int j = 0; j < n; j ++) {
      if (j == i) continue;
        aokis = j;
	aokip = 0;
	takap = 0;
	if (i < j) {
	  for (int k = 0; k < (j - i); k++) {
	    if (k % 2 != 0) aokip += retu[i + k];
	    //else takap += retu[i+k];
	  }
	}else {
	   for (int k = 0; k < (i - j); k++) {
	    if (k % 2 != 0) aokip += retu[j + k];
	    //else takap += retu[j+k];
	  }
	}
	//if ((i == 0 && j == 1) || takap > maxtakap) maxtakap = takap;
	if (j == 0 || aokip > maxaop) {
	maxaop = aokip;
	bufj = j;
	}
    }
    maxaop = 0;
	if (i < bufj) {
	  for (int k = 0; k < (bufj - i); k++) {
	    if (k % 2 == 0) takap += retu[i+k];
	  }
	}else {
	   for (int k = 0; k < (i - bufj); k++) {
	    if (k % 2 == 0) takap += retu[bufj+k];
	  }
	}
	if (i == 0 || takap > maxtakap) maxtakap = takap; 
  }


cout << maxtakap << endl;
  return 0;
}
