#include <bits/stdc++.h>
 
using namespace std;


int main() {
	string a, b;
    cin >> b;
    for(int i=1; i<100000;i++) {
        int x =  i;
        string t = "";
        while (x != 0) {
            int tmp = x % 10;
            x /= 10;
            t = (char)(tmp + 48) + t;
        }
        a += t;
    }
    for(int i=0;i<a.size();i++)
	 if (a[i] == b[0]) 
	 {
        string t = a.substr(i, b.size()); // Ham substr dung de xuat trich 1 chuoi tu chuoi cho truoc
        if (t == b) 
		{
		cout<<i+1;
		 return 0;
		 }
    }
    return 0;
}
