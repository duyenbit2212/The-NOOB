#include <iostream>
using namespace std;

int main(){
	int res,n,m,k;
	cin >> n >> m >> k;
	res = min(n/2,m);
	k -= n + m - res*3;
	res -= (k > 0)?(k/3 + k % 3 != 0):0;
	cout << res;
	return 0;
}