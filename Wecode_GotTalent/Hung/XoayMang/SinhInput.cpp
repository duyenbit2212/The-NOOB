#include <bits/stdc++.h>
using namespace std;
const long Lim = 100;

long long Rand(long long l, long long h){
	return rand() % (h - l +  1) + l;
}

void GenInput(ofstream &o, long t){
	//Chia Subtask
	long n = Rand(5,10);
	if (t > 10)
		n = Rand(Lim/10, Lim/10 + 10);
	if (t == 20)
		n = Lim;
	//Xuat n ra
	o << n << endl;
	//Random Cac Phan Tu Con Lai Cua Mang
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			o << Rand(-100, 100) << " ";
		o << '\n';
	}
}

int main(){
	srand(time(NULL));
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	long N = 20; //So Test
	ofstream o;
	for (int t = 1; t <= N; t++) {
		string xu = "input" + to_string(t) + ".txt";
		o.open (xu, ios::out | ios::app | ios::binary);
		GenInput(o, t);
		o.close();
	}
	return 0;
}

