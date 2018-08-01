#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    freopen("C:\\Users\\Akagami\\Documents\\Projects\\Do thi\\input.txt", "r", stdin);
    int dinh, canh, u, v;
    cin >> dinh >> canh;
    vector <vector <int>> matran (dinh, vector <int> (dinh, 0));
    for (int i = 0; i < canh; i++)
    {
        cin >> u >> v;
        matran[u][v] = 1;
    }
    for (auto i = matran.begin(); i != matran.end(); i++)
    {
        for (auto j = (*i).begin(); j != (*i).end(); j++)
            cout << *j << " ";
    cout << "\n";
    }
return 0;
}
