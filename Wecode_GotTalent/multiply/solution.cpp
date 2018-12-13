/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
for
while
goto
[
]
*
###End banned keyword*/
#include <iostream>
using namespace std;

int multiply(int m, int n){
    if(n == 0) return 0;
    else return m + multiply(m, n - 1);
}

int main (){
    int m, n; cin >> m >> n;
	cout << multiply(m, n);
}
