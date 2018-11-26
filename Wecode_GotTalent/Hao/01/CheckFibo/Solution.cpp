#include <iostream>
using namespace std;
typedef unsigned long long ll;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second

int main(){
	ll n;
	cin >> n;
	ll Fib[100];
	Fib[0] = 0;
	Fib[1] = 1;
	int i = 2;
	while(1){
		Fib[i] = Fib[i - 1] + Fib[i-2];
		if (Fib[i] == n){
			cout << "Yes " << i;
			return 0;
		}
		if (Fib[i] > n){
			cout << "No"; 
			return 0;
		}
		++i;
	}              	
	return 0;
}