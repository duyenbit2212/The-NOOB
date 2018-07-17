#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        v.push_back(str);
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            bool Check = true;
            for (int k = 0; k < n; k++)
                if (v[k][j] == v[i][j] && k != i)
                    Check = false;
            for (int k = 0; k < m; k++)
                if (v[i][k] == v[i][j] && k != j)
                    Check = false;
            if (Check)
                cout << v[i][j];
        }
    return 0;
