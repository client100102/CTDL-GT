// tham khao: programiz.com
#include <iostream>
using namespace std;

int linearSearch(int arr[], int x, int n) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}
//ví dụ:
int main() {
  int arr[] = {2, 4, 0, 1, 9, 10, 14, 17, 22, 27, 38, 45, 56};
  int x = 45;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = linearSearch(arr, x, n);
  (result == -1) ? cout << "Phan tu khong co trong mang"
                 : cout << "Phan tu o vi tri " << result;
}
