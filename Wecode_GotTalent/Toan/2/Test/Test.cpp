#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second

void Gen(fstream &in,fstream &f,ld t){
	//Cap Nhat De Bai Yeu Cau Xuat Day Co So Phan Tu Nho Hon Truoc
	int n,m,k,res;
	long long res2;
	in >> n >> m >> k;
	f >> res2;
	res = min(n/2,m);
	k -= n + m - res*3;
	if (k > 0){
		res -= k /3;
		res -= (k%3 != 0);
	}
	cout << t << " "<< ((res == res2)?"YES":"NO") << " " << res << " " << res2 <<  endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ld N = 20;
	fstream in;
	fstream f;
	FOR(t,1,N + 1){
		string s = "input" + to_string(t) + ".txt";
		string o = "output" + to_string(t) + ".txt";
		in.open (s, ios::in | ios::app | ios::binary); 
		f.open (o, ios::in | ios::app | ios::binary); 
		Gen(in,f,t);
		f.close();
		in.close();
	}
	return 0;
}