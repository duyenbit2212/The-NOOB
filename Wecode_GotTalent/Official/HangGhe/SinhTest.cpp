#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second
const ll Lim = 1e5;//Gioi Han 10^5 

	/*cin >> n >> m;
	FOR(i,0,n){
		ld x;
		cin >> x;
		t = max(t,ll(x));
		s += x;
	}
	ll res = max(t,ll(ceilf((s*1.0 + m) / n))); 
	cout << res  << " " << t + m; */
ll Rand(ll l,ll r){
	return rand() % (r - l + 1) + l;
}
void Gen(fstream &in,fstream &out,ld t){
	ll n,m;
	ll s = 0,maxA = 0,x,res;  

	n = Rand(Lim / 10,Lim);
	m = Rand(Lim / 10,Lim);
	in << n << ' ' << m << endl;
	FOR(i,0,n){
		x = Rand(Lim / 10, Lim);
		maxA = max(maxA,x);
		s += x;
		in << x << ' ';
	}	
	double tmp = (s + m)/n;
	res = ceilf(tmp);
	if (res < maxA)
		res = maxA;

	out << res  << " " << maxA + m;
}

int main(){
	srand(time(NULL));
	ld N = 20;
	fstream in;
	fstream f;
	FOR(t,1,N + 1){
		string s = "input" + to_string(t) + ".txt";
		string o = "output" + to_string(t) + ".txt";
		in.open (s, ios::in | ios::app | ios::binary); 
		f.open (o, ios::out | ios::app | ios::binary); 
		Gen(in,f,t);
		f.close();
		in.close();
	}
	return 0;
}