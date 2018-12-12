#include <bits/stdc++.h>
using namespace std;

void GenOutput(ifstream &in, ofstream &out)
{
	int n, ans=1;
	char c, c1;
	in >> n;
	c1 = ' ';
	for(int i = 0; i < n; i++)
	{
		in >> c;
		if(c != c1) ++ans, c1 = c;
	}
	out << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	long N = 20;
	ifstream in;
	ofstream out;
	for (int t = 1; t <= N; t++)
    {
        string nh = "input" + to_string(t) + ".txt";
        string xu = "output" + to_string(t) + ".txt";
        in.open (nh, ios::in | ios::app | ios::binary);
        out.open (xu, ios::out | ios::app | ios::binary);
        GenOutput(in, out);
        in.close();
        out.close();
	}
    return 0;
}
