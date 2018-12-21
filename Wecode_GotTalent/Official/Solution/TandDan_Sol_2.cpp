#include <iostream>
using namespace std;
int a[2005];
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n1 %d 500000\n",n+1,n);
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (int i=0;i<n;i++)
    printf("2 %d %d\n",i+1,a[i]+500000-i);
}