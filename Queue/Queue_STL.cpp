#include <queue>
#include <iostream>
using namespace std;

int main(){
	queue <int> q;
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n ; i++){
		cin >> a[i];
		q.push(a[i]);
	}

	while (!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}