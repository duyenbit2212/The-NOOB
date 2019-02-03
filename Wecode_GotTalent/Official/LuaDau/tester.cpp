#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second

int main(int argc, char const *argv[])
{
 
	ifstream test_in(argv[1]);    /* This stream reads from test's input file   */
	ifstream test_out(argv[2]);   /* This stream reads from test's output file  */
	ifstream user_out(argv[3]);   /* This stream reads from user's output file  */
    ll n;
    test_in >> n;
    string s;
    user_out >> s;
    ll m,x;
    user_out >> m >> x;
    if (n <= 2){
    	if (s == "No")
    		return 0;
    	return 1;
    }
	/* If user's output is correct, return 0, otherwise return 1       */
}
