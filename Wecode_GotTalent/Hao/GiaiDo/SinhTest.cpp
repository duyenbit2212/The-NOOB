﻿#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second
const ll Lim1 = 100000;
const ll Lim2 = 1e18;
map <ll,ll> M;

ll Rand(ll l, ll r){
	ll tmp = 1LL*rand()*rand()*rand()*rand();
	return (tmp % (r - l + 1) + l);
}

void Gen(fstream &in,fstream &f,ld t){
	ll a,ll b;
	ll Lim = (t <= 10) ? Lim1: Lim2;
	do {
		a = Rand(2,Lim);
		b = a + Rand(0,Lim - a);
	}
	while (M.find({a,b}) != M.end());
	M.insert({a,b});
	in << a << " " << b;
	      
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