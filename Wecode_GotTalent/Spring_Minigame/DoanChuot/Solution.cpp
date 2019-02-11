#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int count=0;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	for (int i=1;i<n-1;i++)
    {
        if(((a[i]>a[i-1])&& (a[i]>a[i+1]))||((a[i]<a[i-1])&& (a[i]<a[i+1])))
        count++;
    }
	cout<<count;

	return 0;
}
