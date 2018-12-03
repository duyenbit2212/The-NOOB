#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second

set <ld> S;

void Gen(fstream &in,fstream &f,ld t){        
	ld n = rand()%90+ 1;
	if (t == 20) n = 90;
	while (S.find(n) != S.end()){
		n = rand()%90 + 1;		
	}
	S.insert(n);
	cout << t << " " << n << endl;
	vector <ll> Fib(n + 1);
	Fib[0] = 0;
	Fib[1] = 1;
	FOR(i,2,n + 1){
		Fib[i] = Fib[i - 1] + Fib[i-2];
	}
	if ((t == 3 || t == 5 || t == 7 || t == 10) && n != 1)  {
		in << Fib[n] + 1;
		f << "No";
		return;
	}
	in << Fib[n];
	f << "Yes " << n;
}

int main(){
	srand(time(NULL));
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ld N = 20;
	fstream in;
	fstream f;
	FOR(t,1,N + 1){
		string s = "input" + to_string(t) + ".txt";
		string o = "output" + to_string(t) + ".txt";
		in.open (s, ios::out | ios::app | ios::binary); 
		f.open (o, ios::out | ios::app | ios::binary); 
		Gen(in,f,t);
		f.close();
		in.close();
	}
	return 0;
}