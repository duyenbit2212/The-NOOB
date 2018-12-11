#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second
string to_string(ld x){
    char piBuffer[8];
    sprintf(piBuffer, "%d", x);
    string s(piBuffer);
    return s;
}

ll LimN = 2000;
ll LimA = 1e5 + 1;
void Gen(ofstream &out,ld t){
	ld n;
	if (t < 10) 
		n = rand() % (LimN / (20 - t - 1)) + LimN / (20 - t - 1);
	if (t >= 10){
		n = LimN - (20 - t - 1);	
	}
	if (t <= 5){
		n = t + rand() % 20;
	}
	out << n << "\n";             
	FOR(i,0,n){
		ld x = rand() % LimA;
		out << x << " "; 
	}
}
int main(){
	srand(time(NULL));
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ld N = 20;   
	ofstream f;
	FOR(t,0,N){
		string s = "input" + to_string(t + 1) + ".txt";
		f.open (s, ios::out | ios::app | ios::binary);
		Gen(f,t);
  		f.close();
	}
	return 0;
}
