#include <iostream>
using namespace std;
int main()
{
	int  n, ans=1;
	char c,c1;
	cin>>n;
	c1=' ';
	for(int i=0;i<n;i++)
	{
		cin>>c;
		if(c!=c1)++ans,c1=c;
	}
	cout<<ans;
}
