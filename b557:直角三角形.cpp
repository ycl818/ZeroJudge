#include <iostream>
#include <cmath> 
using namespace std;

bool isRightTriangle (int x, int y, int z) {
  if (x * x + y * y == z * z ||
      x * x + z * z == y * y ||
      z * z + y * y == x * x) return true;
  return false;
} 

void pickWoods (int v[], int woods) {
  int cnt = 0;
  for (int i = 0; i < woods; i++) {
    for (int j = 0; j < i; j++) {
      for (int k = 0; k < j; k++) {
        if(isRightTriangle(v[i], v[j], v[k])){
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
}


int main() {
  int n;
  int woods, lens[101];
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> woods;
    for (int j = 0; j < woods; j++) {
      cin >> lens[j];
    }
    pickWoods(lens, woods);
  }
  
  return 0;
}
