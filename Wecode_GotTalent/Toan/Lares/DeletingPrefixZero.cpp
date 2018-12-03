#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second

void Gen(ifstream &in,ofstream &f){
	//Cap Nhat De Bai Yeu Cau Xuat Day Co So Phan Tu Nho Hon Truoc
	string s;
	while (!in.eof()){
		getline(in,s);
		f << s <<"\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ld N = 9;
	ifstream in;
	ofstream f;
	FOR(t,1,N + 1){
		string s = "output0" + to_string(t) + ".txt";
		string o = "output" + to_string(t) + ".txt";
		in.open (s, ios::in | ios::app | ios::binary); 
		f.open (o, ios::out | ios::app | ios::binary); 
		Gen(in,f);
		f.close();
		in.close();
	}
	return 0;
}