#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    freopen("C:\\Users\\Akagami\\Documents\\Projects\\Do thi\\input3.txt", "r", stdin);
    int dinh, canh, u = 0, v;
    cin >> dinh >> canh;
    vector <int> mangke;
    vector <int> head;
    head.push_back(0);
    for (int z = 0; z < canh; z++)
    {
        int hjhj = u;
        cin >> u >> v;
        mangke.push_back(v);
        if (u != hjhj)
            head.push_back(z);
    }
    int cpzk = 0;
    for (unsigned int i = 0; i < head.size(); i++)
    {
        cout << "\n";
        cout << "Cac dinh noi tu " << cpzk << ": ";
        for (int j = head[i]; j < head[i+1]; j++)
            cout << mangke[j] << " ";
        cpzk++;
    }
    cout << *(mangke.end() - 1);
return 0;
}
