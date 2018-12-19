#include <bits/stdc++.h>
using namespace std;

const long Lim = 1E6;

long long Rand(long long l, long long h){
	return rand() % (h - l +  1) + l;
}

void GenInput(ofstream &out, long t){
    long n = Rand(10,100);
    if (t > 5)
        n = Rand(100, 1000);
    if (t > 10)
        n = Rand(1000, Lim / 100);
    if (t > 15 && t < 20)
        n = Rand(Lim / 100, Lim / 10);
    if (t == 20)
        n = Lim;
    out << n << '\n';
    for (long i = 0; i < n; i++){
        out << char(Rand('A', 'Z')) << '\n';
    }
}

int main(){
    srand(time(NULL));
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	long N = 20;
	ofstream out;
	for (long t = 1; t <= N; t++)
    {
        string xu = "input" + to_string(t) +".txt";
        out.open (xu, ios::out | ios::app | ios::binary);
        GenInput(out, t);
        out.close();
    }
    return 0;
}
