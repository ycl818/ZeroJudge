#include <iostream>
#include <cmath>
using namespace std;

int digits(int n) {
  int cnt = 0; 
  while (n > 0) {
    n /= 10;
    cnt++;
  }
  return cnt;
}

int armstrongSum(int n) {
  int sum = 0, d;
  int temp = n;
  while (n > 0) {
    d = n % 10;
    sum += pow(d, digits(temp));
    n /= 10;
  }
  if(temp == sum) return sum;
  return 0;
}

int main() {
  int n, m, flag = 0;
  cin >> n >> m;
  for (int i = n; i <= m; i++) {
    if (i == armstrongSum(i)) {
      cout << i << " ";
      flag = 1;
    }
  }
  if (flag == 0) {
    cout << "none" << endl;
  }
  cout << endl;
 
  return 0;
}
