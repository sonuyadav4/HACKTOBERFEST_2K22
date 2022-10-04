#include <iostream>
using namespace std;

int main() {
  int size = 5;
  int num = 0;
  for (int i = 1; i <= size; i++) {
    for (int j = size; j > i; j--) {
      cout << " ";
    }
    for (int k = 0; k < i * 2 - 1; k++) {
      if (k == 0 || k == 2 * i - 2) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    num = 0;
    cout << "\n";
  }
  for (int i = 1; i < size; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int k = (size - i) * 2 - 1; k >= 1; k--) {
      if (k == 1 || k == (size - i) * 2 - 1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    num = 0;
    cout << "\n";
  }
  return 0;
}
