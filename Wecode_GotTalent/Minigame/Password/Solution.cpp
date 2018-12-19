#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        bool c1 = 0, c2 = 0, c3 = 0;
        int ok = 0;
        string s;
        cin >> s;
        ok = (s.length() >= 6 && s.length() <= 20);
        for (auto j : s){
            c1 = c1 | (j <='z' && j >= 'a');
            c2 = c2 | (j <='Z' && j >= 'A');
            c3 = c3 | (j <='9' && j >= '0');
        }
        ok += c1 + c2 + c3;
        if (ok == 4){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
