#include <stack>
#include <iostream>
using namespace std;

int main(){
	stack <int> s;
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n ; i++){
		cin >> a[i];
		s.push(a[i]);
	}

	while (!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	return 0;
}