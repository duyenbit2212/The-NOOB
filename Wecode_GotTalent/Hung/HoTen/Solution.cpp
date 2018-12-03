#include <iostream>
#include <string>
using namespace std;

const long Lim = 100;

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

int main() {
    string a[Lim];
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++){
        getline(cin, a[i]);
    }
    for (int i = 0 ;i < n ; i++){
    string tmp = standardized(a[i]);
    if (tmp != "")
        cout << tmp << '\n';
    }
    return 0;
}
