//tham khao: programiz.com
#include <bits/stdc++.h>
using namespace std;

int timKiemNhiPhan(int arr[], int x, int low, int high) {
  if (low > high) {
    return -1;
  }
  int mid = (low + high) / 2;
  if (arr[mid] == x) {
    return mid;
  }
  if (x < arr[mid]) {
    return timKiemNhiPhan(arr, x, low, mid - 1);
  }
  else {
    return timKiemNhiPhan(arr, x, mid + 1, high);
  }
}
//ví dụ:
int main() {
  int arr[] = {2, 3, 4, 6, 10, 40, 69, 89, 96};
  int x = 69;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = timKiemNhiPhan(arr, x, 0, n - 1);
  (result == -1) ? cout << "Phan tu khong co trong mang"
                 : cout << "Phan tu co trong mang, tai vi tri " << result;
    
}
