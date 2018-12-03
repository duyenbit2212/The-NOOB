#include <bits/stdc++.h>
using namespace std;

bool check(char a)
{
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
        return 1;
    else return 0;
}

string standardized(string m)
{
    string z = "";
    for (unsigned int i = 0; i < m.length(); i++) {
        if (check(m[i]) || (i+1 != m.length() && m[i+1] != ' ' && m[i] == ' ')) {
            if (m[i] >= 'A' && m[i] <= 'Z')
                z += char(m[i] + 32);
            else
                z = z + m[i];
        }
    }
    while (z[0] == ' ')
        z.erase(0,1);
    auto vtHo = z.find(' '),
        vtTen = z.rfind(' ');
    if (vtHo == string::npos){
        z[0] -= 32;
        return z;
    }
    string Ho = z.substr(0,vtHo);
    string Ten = z.substr(vtTen + 1, z.length() - vtTen - 1);
    Ho[0] -= 32;
    Ten[0] -= 32;
    return Ho + " " + Ten;
}

void GenOutput(ifstream& in, ofstream& out){
    int n;
    in >> n;
    for (int i = 0; i < n; i++){
        string s;
        cin.ignore();
        getline(in, s);
        string tmp = standardized(s);
        if (tmp != "")
        out << tmp << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	long N = 5;
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
