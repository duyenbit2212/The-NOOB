#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second

const ld Lim = 1e5;
const ld Lim2 = 100;

ll Rand(ll l, ll r){
	return ll(rand()*rand()*rand()*rand()*rand())%(r-l+1) +l;
}

bool Prime(ld n){
	if (n < 2) return 0;
	for (ld i = 2; i <= sqrt(n) ; i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

ld P[Lim];
void Init(){
	P[0] = 0;
	for (ld i = 1;i <= Lim;i++){
		P[i] = Prime(i) + P[i - 1];
	}
}

void Gen(ofstream &in,ofstream &f,ld t){        
	ld n;
	ld LIMIT;
	if (t <= 10){
		LIMIT = Lim2;
	}                 
	else 
		LIMIT =Lim;
	n = t== 20?Lim:Rand(LIMIT/10,LIMIT);
	cout << t << endl;
	in << n << "\n";
	FOR(i,0,n){
		ld l = Rand(0,LIMIT);
		ld r = l + Rand(0,LIMIT - l);
		in << l << " " << r << "\n";
		f << P[r] - P[l - 1] << "\n";
	}	
}

int main(){
	srand(time(NULL));
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ld N = 20;
	ofstream in;
	ofstream f;
	Init();
	FOR(t,1,N + 1){
		string s = "input" + to_string(t) + ".txt";
		string o = "output" + to_string(t) + ".txt";
		f.open(o);
		in.open(s);
		in.clear();
		f.clear();
		Gen(in,f,t);
		f.close();
		in.close();
	}
	return 0;
}