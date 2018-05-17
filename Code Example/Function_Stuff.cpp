
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)

void Swap (int a,int &b){
	a = a ^ b;b = a ^ b;a = a ^ b;
	cout << &a << " " << &b << endl;
}

int main(){
	int a = 2,b = 11;
	cout << &a << " " << &b << endl;
	Swap(a,b);
	cout << a << " " << b << endl;
	return 0;
}