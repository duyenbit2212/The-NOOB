#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)

#define F2(i,a,b)\
	for (auto i = a; i >= b; i--)

#define fi first
#define se second
ld n;
vector <ll> a,s;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cin >> n;
	a.resize(n);
	s.resize(n,0);
	FOR(i,0,n){
		cin >> a[i];
		s[i] = (i != 0?s[i - 1]:0) + a[i];
	}
	cout << n + 1 << endl;
	ll s = 0;
	F2(i,n - 1,0){
		ld t = ((a[i] + s)/n + ((a[i] + s) % n != 0))*n + i - a[i] - s;
		s += t;
		cout << "1 " << i + 1 << " " << t << endl;	
	}
	cout << "2 " << n << " " << n;
	return 0;
}