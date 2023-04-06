// tham khao: iostream.vn, gochocit.com
#include <iostream>

using namespace std;

void doiChoTrucTiep(int arr[], int n)
{
	for(int i = 0; i < n -1; i ++)
	{
		for(int a = i + 1; a < n; a ++)
		{
			if(arr[i] < arr[a])
			{
				int t = arr[a];
				arr[i] = arr[a];
				arr[a] = t;
			}
		}
	}
}
int main()
{
	int arr[] = {1,3,5,7,9,11,14,44,69};
	int n = sizeof(arr) / sizeof(arr[0]);
	doiChoTrucTiep(arr, n);
	cout << "Mang da sap xep: " << endl;
	for(int i = 0; i < n; i ++)
	{
		cout << arr[i] << " ";
	}
}
