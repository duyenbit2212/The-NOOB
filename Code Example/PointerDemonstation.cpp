#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)

int main(){
	int *a;
	int *b;
	int c = 11;
	printf("%d %p\n",c,&c);
	a = &c;

	cout << a << " " << *a << " " << &a << endl;
	printf("%p %d %p\n",a,*a,&a);//cout << a << " " << *a << " " << &a << endl;
	b = a;
	printf("%d %p\n",b,b);
	cout << int(b);  

	return 0;
}