#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)

int main(){
	vector <ld> a;
	srand (time(NULL));
	ld n = rand() % 5 + 2;             //Random so luong phan tu cua a ; 2 <= n <= 7

	FOR(i,0,n){
		a.push_back( rand() % 10000 + 1); //Random phan tu thu a[i]; 1 <= a[i] <= 10000
	}
	
	cout << a.size() << " " << n << endl; // a.size() tra ve kich thuoc cua mang a

	for (vector <ld>::iterator i = a.begin() ; i != a.end() ; i++){ //Duyet a
		cout << *i << " ";	
	}
	cout << endl;

	for (vector <ld>::reverse_iterator i = a.rbegin() ; i != a.rend() ; i++){ //Duyet nguoc a
		cout << *i << " ";	
	}
	cout << endl;

	vector <ld>::iterator i = a.begin();
	cout << &i << endl;
  
	reverse(a.begin(),a.end());

    for (vector <ld>::iterator i = a.begin() ; i != a.end() ; i++){ //Duyet a
		cout << *i << " ";	
	}
	cout << endl;

	return 0;
}