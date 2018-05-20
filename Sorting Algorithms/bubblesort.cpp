#include<iostream>
using namespace std;
void nhap(int a[], int &n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout<< a[i]<<" ";
}
void BubbleSort(int a[], int n)
{
	int i, j;
	for (int i = 0; i < n; i++)
		for (int j = n - 1; j > i; j--)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
}
void main()
{
	int a[10];
	int n;
	cout << " nhap n: ";
	cin >> n;
	nhap(a, n);
	BubbleSort(a, n);
	xuat(a, n);
	system("pause");
}