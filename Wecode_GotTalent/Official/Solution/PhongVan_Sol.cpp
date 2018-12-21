#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second
ll x,y;
ll z;

void Cal(){
	ll i,j;
	i =x + y - 1;
	j = i*(i + 1LL)/2;
	ll res = j - i + y;
	cout << res << "\n"; 
}

void FindZ(){
	ll i,j;
	i = sqrt(z << 1);
	j = i*(i + 1LL) / 2;
	if (z > j){
	 	++i;
	 	j = i*(i + 1) / 2;
	}	
	ll ResX = 1, ResY = i;
	ResX += j - z;
	ResY -= j - z;
	cout << ResX << " " << ResY;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	cin >> x >> y;
	Cal();
	cin >> z;
	FindZ();
	return 0;
}