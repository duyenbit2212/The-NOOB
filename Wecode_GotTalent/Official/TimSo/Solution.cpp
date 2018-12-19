#include <iostream>
using namespace std;

int main(){
    long long n, s = 0, t = 0, s1 = 0, t1 = 0; 
    cin >> n;
    t = (n + 1)*n/2;
    for (long long i = 1; i <= n; i++){
    	long long x;
    	cin >> x;
    	s += x;
    	t1 += i*i;
    	s1 += x*x;
    }
    // 
    s -= t;  //s = x - y;
    s1 -= t1;// s1 = x^2 - y^2  = (x + y)(x - y)
    s1 = (s1 / s); //s1 = x + y
    long long x = (s + s1) >> 1;
    long long y = (s1 - s) >> 1;
    cout << x << " " << y;
	return 0;
}