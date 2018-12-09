#include <iostream>
#include <cmath>
using namespace std;

long long Sqrt(long long &n, long long i){//50% so diem
	long long res = i*i;
	if (n == 0 || res > n){
		return  i - 1;
	}
	if (res == n) 
		return i;
	return Sqrt(n,i + 1);
}

long long SQRT(long long &n, long long l, long long r){
	long long m = (l + r) >> 1, tmp = m * m;
	if (l >= r){
		return l;
	}
	if (tmp > n)
		return SQRT(n,l,m - 1);
	return SQRT(n,m + 1,r);
}


int main(){
	long long a,b;
	long long c,d;
	cin >> a >> b;
	c = a; d = b;
	a--;
	a = SQRT(a,1,a);
	b = SQRT(b,1,b);
	cout << b - a;
	return 0;
}