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

ll Lim = 1e5;
void Gen(ofstream &in,ofstream &out,ld t){
	if (t == 20){
		out << 0;
		in << Lim;
		return;
	}
	if (t == 1){
		out << "2\nPIIPIIPIPIIPIPII\nIIPIPIIPIPIIPIIP";
		in << 16;
		return;
	}	
	out << 0;
	in << rand() % (Lim - 17 + 1) + 17;
}
int main(){
	srand(time(NULL));
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ld N = 20;   
	ofstream f,out;
	FOR(t,0,N){
		string s = "input" + to_string(t + 1) + ".txt";
		string tt = "output" + to_string(t + 1) + ".txt";

		f.open (s, ios::out | ios::app | ios::binary);
		out.open (tt, ios::out | ios::app | ios::binary);

		Gen(f,out,t + 1);
  		f.close();
  		out.close();
	}
	return 0;
}
