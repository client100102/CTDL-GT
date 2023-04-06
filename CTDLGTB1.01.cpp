#include <iostream>
using namespace std;

int sumSoChan(int arr[], int n) {
    if (n == 0) return 0;
    if (arr[n - 1] % 2 == 0) return arr[n - 1] + sumSoChan(arr, n - 1);
    else return sumSoChan(arr, n - 1);
}

int main() {
    int arr[] = {1, 3, 6, 9, 11, 47, 56, 69};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Tong cac so chan trong mang la: " << sumSoChan(arr, n);
    return 0;
}
