//tham khao: gochocit.com, sinhvientot.net, codelearn.io
#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}
void chonTrucTiep(int arr[], int n)
{
	for(int i = 0; i < n - 1; i ++)
	{
		int min = i;
		for(int j = i + 1; j < n; j++)
		{
			if(arr[j]< arr[min])
			{
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}
}
//ví dụ:
int main()
{
	int arr[] = {2,5,8,1,0,17,57,69,49};
	int n = sizeof(arr, n);
	chonTrucTiep(arr, n);
	cout << "Mang sau khi sap xep: " <<endl;
	for(int i = 0; i < n; i ++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
