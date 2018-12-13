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
    
    vector <ll> a;
    ld n,m;
    vector <ll> s;
    vector <pair<ld,ll>> q;
    test_in >> n;
    a.resize(n + 2,0);
    s.resize(n + 2,0);
    FOR(i,1,n + 1){
    	test_in >> a[i];
    }
    user_out >> m;
    if (m > n + 1) 
    	return 1;
    FOR(it,0,m){
    	ld t,i;
    	ll x;
    	user_out >> t >> i >> x;
    	if (i > n || x > 1e6 || x < 0)
    		return 1;
    	if (t == 2){
    		if (x == 0) 
    			return 1;
    		q.push_back({i,x});
    		continue;
    	}
    	s[0] += x;
    	s[i + 1] -= x;
    }
    FOR(i,1,n + 1){  
    	s[i] += s[i - 1];
    	a[i] += s[i];
    }
    for (auto v : q){
    	ld k = v.fi;
    	ll x = v.se;
    	FOR(i,1,k + 1){
    		s[i] %= x;
    	}	
    }
    FOR(i,2,n + 1){
    	if (s[i] <= s[i - 1]) 
    		return 1; 	
    }
    return 0;
	/* If user's output is correct, return 0, otherwise return 1       */
}
