#include <bits/stdc++.h>

using namespace std;

long fibo(int a)
{
    if (a == 1 || a == 2)
        return 1;
    else
    {
        return (fibo(a - 1) + fibo(a - 2));
    }
}

int main()
{
int n;
cin >> n;
for (int i = 1; i <= n; i++)
    cout << fibo(i) << "\t";
return 0;
}
