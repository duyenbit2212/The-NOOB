#include <bits/stdc++.h>

using namespace std;

int dem(int a, int b)
{
    while (a > 0)
    {
        a = a / 10;
        b++;
    }
    return b;
}

int main()
{
int N, b = 0;
cin >> N;
string mang;
for (int i = 1; i <= N; i++)
    mang = mang + to_string(i);
for  (int i = 0; i < mang.size(); i++)
   {
       string temp;
   for (int j = i; j < (i + dem(N, b)); j++)
   {
    temp = temp + mang[j];
   }
   if (temp == to_string(N))
   {
       cout << i + 1;
       break;
   }
   }
   return 0;
}

