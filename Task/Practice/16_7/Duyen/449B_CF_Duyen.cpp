#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
   vector<string>vs1;
   vector<string>vs2;
   int m , n;
   string a , b;
   cin>>n>>m;
   string mn[n];
   for(int i=0;i<m;i++){
    string a , b;
    cin>>a>>b;
    vs1.push_back(a);
    vs2.push_back(b);
   }
   for(int i=0;i<n;i++){
    cin>>mn[i];
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(mn[i]==vs1[j]){
            if(vs1[j].size()>vs2[j].size())
                cout<<vs2[j];
            else
                cout<<vs1[j];
            if(i!=n-1)
                cout<<" ";
            break;
        }
    }
   }

    return 0;
}
