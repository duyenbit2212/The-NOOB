#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <vector <int>> a(n, vector <int>(n));
    for (int z = 0; z < n; z++)
		for (int c = 0; c < n; c++)
            {
                cin >> a[z][c];
            }
    for (int i = 0; i < n; i++)
    {
		for (int j = 0; j < n; j++)
            cout << a[n - j - 1][i] << " ";
        cout << '\n';
    }
    return 0;
}
