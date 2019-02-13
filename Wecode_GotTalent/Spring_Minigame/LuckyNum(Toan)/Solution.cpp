#include <bits/stdc++.h>
using namespace std;

const int   maxn = 1000001;
int         n,t,k;
char        res[2*maxn];

int main()
{
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        k = 0;
        for (int i=1;i<2*n;i++) {
            if (i <= n)
                k += i;
            else
                k += 2*n-i;
            res[2*n-i] = k % 10 + 48;
            k /= 10;
        }
        for (int i=1;i<2*n;i++) printf("%c",res[i]);
        printf("\n");
    }
    return 0;
}
