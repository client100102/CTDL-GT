//tham khao: gochocit.com, freetuts.net
void sapXepChenTrucTiep(int a[], int n)
{
	int pos, i, x;
	for(i = 1; i < n; i ++)
	{
		x = a[i];
		pos = i - 1;
		while((pos >= 0) && (a[pos]>x))
		{
			a[pos + 1] = a[pos];
			pos --;
		}
		a[pos + 1] = x;
	}
}
void main()
{
	int a[10] = {0, 4, 6, 3, 16, 90, 10, 34, 12, 69};
	sapXepChenTrucTiep(a,10);
	cout << "Mang sau khi sap xep: " << endl;
	for(int i = 0; i < 10; i ++)
	{
		cout << a[i] << " ";
	}
	system("pause");
}
