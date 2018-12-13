#include <iostream>
using namespace std;

unsigned long long Fib[100],n;

void Cal(int i){
	Fib[i] = Fib[i - 1] + Fib[i-2];
	if (Fib[i] == n){
		cout << "Yes " << i;
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