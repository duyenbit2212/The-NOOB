#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second
string to_string(ld x){
    char piBuffer[8];
    sprintf(piBuffer, "%d", x);
    string s(piBuffer);
    return s;
}
int main(){
	srand(time(NULL));
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ld N = 20;
	ll Lim = 1e12;//45000;
	ofstream f;
	FOR(t,0,N){
		string s = "input" + to_string(t + 1) + ".txt";
		//cout << s << endl;
		f.open (s, ios::out | ios::app | ios::binary);

		if (t <= 5){
			f << (rand()%100 + 3);
		}
		else {
		 	if (t <= 10){
		 		f << (rand()%ld(sqrt(Lim)) + 3);
		 	}
		 	else
		 		f << (Lim - t * 2);
		}
  		f.close();
	}
	return 0;
}
