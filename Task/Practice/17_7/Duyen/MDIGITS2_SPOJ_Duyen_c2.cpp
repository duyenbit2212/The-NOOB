#include <bits/stdc++.h>

using namespace std;


int main() {
	string a, b;
    cin >> b;
    for(int i=1; i<= 100000;i++) { // " <="
        int x =  i;
        string t = "";
        while (x != 0) {
            int tmp = x % 10;
            x /= 10;
            t = (char)(tmp + 48) + t;
        }
        a += t;
    }
    int k;
	k=a.find(b);
	cout<<k+1;
    return 0;
    }
