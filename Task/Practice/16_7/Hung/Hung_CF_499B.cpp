#include <bits/stdc++.h>

using namespace std;

string find (string a, int m, auto mang)
{
    int check = 0;
        for (int i=0; i < m; i++)
        {
            for (int j=0; j < 2; j++)
            {
                if (a == (mang[i][j]))
                {
                    if (mang[i][0].size() <= mang [i][1].size())
                    {
                        check = 1;
                    }
                    else
                    {
                        check = 2;
                    }
                }
            }
            if (check == 1)
                return mang[i][0];
            else if (check == 2)
                return mang[i][1];
        }
        return a;
}

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    string h, z, temp;
    vector <vector <string>> mang;
    for (int i=0; i < m; i++)
    {
        vector <string> tmp;
        for (int j=0; j < 2; j++)
       {
        cin >> temp;
        tmp.push_back(temp);
       }
        mang.push_back(tmp);
    }
    for (int i=0; i < n; i++)
        {
            cin >> z;
            h = h + find (z, m, mang) + ' ';
        }
    cout << h;
    return 0;
}
