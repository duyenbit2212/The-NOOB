#include <bits/stdc++.h>

using namespace std;

long giaithua(int a)
{
    if (a <= 1)
        return 1;
    else
        return (a * giaithua(a - 1));
}

int main()
{
int n;
cin >> n;
cout << "n! = " << giaithua(n);
return 0;
}
