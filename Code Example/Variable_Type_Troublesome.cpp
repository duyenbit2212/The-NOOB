#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)

int main(){
	ll a;
	ld n;
	//cin >> n;
	n = 32;
	a = 1 << n;
	//cout << a << endl;

	a = 1;
	a <<= n;
	//cout << a << endl; 
    
    ll b;
    b = n + a;
    //cout << b << endl;
     
    n = 2147483647;

    b = n + 10;
    cout << n+1 << " " << b << endl;

    return 0;
}