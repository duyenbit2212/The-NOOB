#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second
const ld Lim = 1e5;//Gioi Han 10^5 
set <ld> P;
void Gen(fstream &in,fstream &out,ld t){
	ld n = Lim;
	ld x,y;
	if (t <= 3){
		do 
			n = rand()%10 + 3;
		while (P.find(n) != P.end());
	}
	else 
		if (t <= 10){
			do 
				n = rand()%100 + 10;
			while (P.find(n) != P.end());
		}
		else
			if (t <= 19){
				do 
					n = rand()%Lim + 100;
				while (P.find(n) != P.end());
			}
	P.insert(n);
	x = rand() % n + 1;
	do
		 y = rand()%n + 1;
	while (x == y);        
    vector <ld> a;
    FOR(i,1,n + 1){
    	if (i != y)
    		a.push_back(i); 
     	if (i == x)
    		a.push_back(i);
    }
    random_shuffle(a.begin(),a.end());
    in << n << "\n";
    FOR(i,0,n){
    	in << a[i] << " " ; 
    }
    out << x << " " << y;
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