#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
  int leas, max;
  int num;
  int res[num];
  int result = 0;
  int i;
  
  cin >> leas >> max;
  cin >> num;
  for (i = 0; i < num; i++) {
    cin >> res[i];
  }
  for (i = 0; i < num; i++) {
    result = 0;
    if (max < res[i]){
      result = -1;
      cout << result << endl;
    } else if(res[i] < leas){
      result = leas - res[i];
      cout << result << endl;
    } else {
      cout << result << endl;
    }
  }


  return 0;
}


