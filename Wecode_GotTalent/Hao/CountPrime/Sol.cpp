#include <iostream>
#include <cmath>
using namespace std;

bool Prime(long n){
	if (n < 2){
		return 0;	
	}
	for (long i = 2;i <= sqrt(n);i++)
		if (n % i == 0)
			return 0;
	return 1;
}

long P[Lim];
void Init(){
	P[0] = 0;
	for (long i = 1;i <= Lim;i++){
		P[i] = Prime(i) + P[i - 1];
	}
}

int main(){
	long a,b,n;
	Init();
	cin >> n;
	for (long i = 1;i <= n;i++){
		cin >> a >> b;
		cout << P[b] - P[a-1] <<endl;
	}


	return 0;
}