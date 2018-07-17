#include<iostream>
using namespace std;
void main()
{
	int a[100][100];
	int m, n;
	//cout << " nhap kich thuoc ma tran";
	cin >> n;
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		for (int c = 0; c <= i; c++) {
			a[i-c][c] = s + 1;
			s = a[i-c][c];
		}
	}
	int x, y;
	cout << " nhap x,y ";
	cin >> x >> y;
	cout << " so can tim la: ";
	cout << a[x][y];
	system("pause");
}