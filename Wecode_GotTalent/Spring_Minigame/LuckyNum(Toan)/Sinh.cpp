#include <bits/stdc++.h>

using namespace std;

const int iTest = 20;
const int N = 1000001;

char res[2*N];

long long Rand(long long l, long long h)
{
    return l + ((long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) +
                rand()) % (h - l + 1);
}

string toString(long long x) {
    string ans = "";
    while (x != 0) {
        ans = (char)(x % 10 + 48) + ans;
        x /= 10;
    }
    return ans;
}

vector <int> CreateInp(string name, int Test) {
    ofstream inp((name + ".txt").c_str());
    inp << Test << '\n';
    vector <int> ans;
    for (int i = 1; i <= Test; i++) {
        int tmp = Rand(1, 1000000);
        ans.push_back(tmp);
        inp << tmp << '\n';
    }
    inp.close();
    return ans;
}

void CreateOut(string name, vector <int> nList) {
    ofstream out((name + ".txt").c_str());
    for (int i = 0; i < (int)nList.size(); i++) {
        int k = 0;
        int n = nList[i];
        for (int i=1;i<2*n;i++) {
            if (i <= n)
                k += i;
            else
                k += 2*n-i;
            res[2*n-i] = k % 10 + 48;
            k /= 10;
        }
        for (int i=1;i<2*n;i++) out << res[i];
        out << '\n';
    }
    out.close();
}

int main() {
    srand(time(NULL));
    for (int i = 1; i <= iTest; i++) {
        int Test = Rand(1, 10);
        string name = toString(i);
        vector <int> nList = CreateInp("input" + name, Test);
        CreateOut("output" + name, nList);
    }
}
