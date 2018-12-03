#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long a,b;
	cin >> a >> b;
	a = sqrt(a - 1);
	b = sqrt(b);
	cout << b - a;
	return 0;
}