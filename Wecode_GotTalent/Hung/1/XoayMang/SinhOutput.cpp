#include <bits/stdc++.h>
using namespace std;

void GenOutput(ifstream &i,ofstream &o){
	int n;
    i >> n;
    vector <vector <int>> a(n, vector <int>(n));
    for (int z = 0; z < n; z++)
		for (int c = 0; c < n; c++)
            {
                i >> a[z][c];
            }
    for (int i = 0; i < n; i++)
    {
		for (int j = 0; j < n; j++)
            o << a[n - j - 1][i] << " ";
        o << '\n';
    }
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	long N = 20;
	ifstream i;
	ofstream o;
	for (int t = 1; t <= N; t++) {
        string nh = "input" + to_string(t) + ".txt";
        string xu = "output" + to_string(t) + ".txt";
        i.open (nh, ios::in | ios::app | ios::binary);
        o.open (xu, ios::in | ios::app | ios::binary);
        GenOutput(i, o);
        i.close();
        o.close();
	}
    return 0;
}
