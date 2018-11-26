#include <bits/stdc++.h>
using namespace std;

long long Rand(long long l, long long h){
	return rand() % (h - l +  1) + l;
}

void GenInput(ofstream &out, long t){
    long n = Rand(2, 5);
	if (t > 5)
		n = Rand(4, 7);
	if (t == 10)
		n = 10;
    out << n << '\n';
    long m = Rand(8, 40);
    for (int j = 0; j < n; j++) {
            long sl = Rand(1, 20);
            long maxB = Rand(0, m / 4),
                 maxa = Rand(0, m / 4),
                 max1 = Rand(0, m / 4),
                 demB = 0,
                 dema = 0,
                 dem1 = 0;
        for (int i = 0; i < sl; i++) {
        long sinh = Rand(1, 3);
        if (sinh == 1) {
            char B = Rand(65, 90);
            demB++;
            if (demB > maxB)
                continue;
            out << static_cast<char>(B);
        }
        else if (sinh == 2) {
            char a = Rand(97, 122);
            dema++;
            if (dema > maxa)
                continue;
            out << static_cast<char> (a);
        }
        else if (sinh == 3) {
            char so = Rand(48, 57);
            dem1++;
            if (dem1 > max1)
                continue;
            out << static_cast<char> (so);
        }
    }
    out << '\n';
    }
}

int main()
{
    srand(time(NULL));
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	long N = 10;
	ofstream out;
    for (int t = 1; t <= N; t++) {
		string xu = "input" + to_string(t) + ".txt";
        out.open (xu, ios::out | ios::app | ios::binary);
		GenInput(out, t);
		out.close();
	}
    return 0;
}
