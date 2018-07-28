#include <bits/stdc++.h>

using namespace std;

long thapphan(vector <long> h)
{
    int j = 0;
    long s = 0;
    for(int i = h.size(); i > 0; i--)
    {
        s = s + (h[j] * pow(2, (i-1)));
        j++;
    }
    return s;
}

void xuat(vector <long> b)
{
    for (auto i = b.begin(); i != b.end(); i++)
    {
        cout << *i;
    }
    cout << "\n";
}

void daynhiphan(unsigned int i, int n, vector <long> mang)
{
    for (int j = 0; j <= 1; j++)
    {
        mang[i] = j;
        if ((thapphan(mang) <= n) && (i == mang.size() - 1))
            xuat(mang);
        else
            daynhiphan(i + 1, n, mang);
    }
}

int main()
{
int n, m, v = 0;
cin >> n;
m = n;
while(m > 0)
{
m = m / 2;
v++;
}
vector <long> mang(v, 0);
daynhiphan(0, n, mang);
return 0;
}

