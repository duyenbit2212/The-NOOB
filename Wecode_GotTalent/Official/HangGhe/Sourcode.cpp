#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		a[i]=p;
	}
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	if(a[i]>a[j])
	{
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	
	int iMax=0, iMin=0;
	iMax=a[n-1]+m;

	for(;m>0;m--)
		{
		a[0]=a[0]+1;
		for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	if(a[i]>a[j])
	{
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
		}
	
		iMin=a[n-1];
	cout<<iMin<<" "<<iMax;
	return 0;
}
