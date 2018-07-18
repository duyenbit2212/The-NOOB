#include<iostream>
#include<string>
using namespace std;
void main()
{
	int n;
	int m;
	//cout << " nhap so tu cua giang vien va so tu trong moi ngon ngu";
	cin >> n >> m;
	string a[10], b[10];

	cin.ignore();
	
	for (int i = 0; i < m; i++)
	{
		getline(cin,a[i]);
		getline(cin, b[i]);
	}
	
	string c[10];
	//cout << " nhap bai giang : " << endl;
	for (int i = 0; i < n; i++)
		getline(cin, c[i]);
	string d[10];
	int tail;
	int head;

	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((c[i] == a[j]) || (c[i] == b[j]))
			{
				if (a[j].size() > b[j].size())
					d[i] = b[j];
				else
					d[i] = a[j];
			}
			
		}
	}


	int du = n - m;
	string mangdu[10];
	for (int i = m; i < n; i++)
	{
		mangdu[i] = c[i];
	}
	for (int i = 0; i < m; i++) {
		for (int j = m; j < n; j++) {
			if (c[i] == mangdu[j])
				d[j] = d[i];
		}
	}

	for (int i = 0; i < n; i++)
		cout << d[i] << " ";
	system("pause");

}