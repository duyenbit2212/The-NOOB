#include <iostream>
using namespace std;
typedef unsigned long long ll;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second

ll Fib[100],n;

void Cal(int i){
	Fib[i] = Fib[i - 1] + Fib[i-2];
	if (Fib[i] == n){
		cout << "Yes\n" << i;
		return;
	}
	if (Fib[i] > n){
		cout << "No"; 
		return;
	}	
	Cal(i + 1);
}

int main(){
	cin >> n;   
	Fib[0] = 0;
	Fib[1] = 1;
	Cal(2);	
	return 0;
}