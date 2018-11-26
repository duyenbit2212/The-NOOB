#include <bits/stdc++.h>
using namespace std;

void GenOutput(ifstream &in, ofstream &out)
{
    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        bool c1 = 0, c2 = 0, c3 = 0;
        int ok = 0;
        string s;
        in >> s;
        ok = (s.length() >= 6 && s.length() <= 20);
        for (auto j : s){
            c1 = c1 | (j <='z' && j >= 'a');
            c2 = c2 | (j <='Z' && j >= 'A');
            c3 = c3 | (j <='9' && j >= '0');
        }
        ok += c1 + c2 + c3;
        if (ok == 4){
            out << "YES\n";
        }
        else
            out << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	long N = 10;
	ifstream in;
	ofstream out;
	for (int t = 1; t <= N; t++) {
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
