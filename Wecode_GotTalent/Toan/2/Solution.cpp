#include <iostream>
using namespace std;

int main(){
	int res,n,m,k;
	cin >> n >> m >> k;
	res = min(n/2,m);
	k -= n + m - res*3;
	if (k > 0){
		res -= k / 3;
		res -= (k%3 != 0);
	}
	cout << res;
	return 0;
}