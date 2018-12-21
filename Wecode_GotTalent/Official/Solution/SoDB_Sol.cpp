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

long long res = 0;
void SQRT(long long &n,long long l, long long r){
	long long m = (l + r) >> 1, tmp = m * m;
	if (tmp < 0 || m >= 1e9) //Xu Li Tran So
		tmp = n + 1;
	if (l > r) {
		if (tmp < n)
			res = m;
		return;
	}
	if (tmp == n){
		res = m;
		return;
	}
	if (tmp < n){
		res = m;
		SQRT(n,m + 1,r);
		return;
	}
	SQRT(n,l,m - 1);
}

int main(){
	long long a,b;
	cin >> a >> b;
	/*--a;         
	SQRT(a,1,a);
	a = res;     
	res = 0;
	SQRT(b,1,b);
	b = res; */
	a = sqrt(a - 1);
	b = sqrt(b);
	cout << b - a;
	return 0;
}