#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;
typedef long ld;
ll n,m;
ll s = 0,t = 0;

int main(){
	cin >> n >> m;
	for (ld i = 0; i < n ; i++){
		ll x;
		cin >> x;
		t = max(t,x);
		s += x;
	}
	double tmp = (s + m)/n;
	ll res = ceilf(tmp);
	if (res < t)
		res = t; 
	cout << res  << " " << t + m;
	return 0;
}