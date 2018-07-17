#include<iostream>
using namespace std;
void main()
{
	char a[100][100];
	int  i, j,m,n, c;
	cin >> m >> n;

	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++) {
			cin >> a[i][j];
			
		}
	}
	for (i = 1; i <= m; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int kt = 1;
			
				for (c = 1; c <= n; c++)
				{
					if (c != j)
					{
						if (a[i][j] == a[i][c]) {
							kt = 0;
							break;
						}
					}

				}
			
			
				for (c = 1; c <= m; c++)
				{
					if (c != i)
					{
						if (a[i][j] == a[c][j]) {
							kt = 0;
							break;
						}
					}
				}
			
				if (kt == 1)
					cout << a[i][j];
			
		}
	}
	system("pause");
}