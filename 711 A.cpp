#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string a[n];
for(int i=0;i<n;++i) cin>>a[i];
for(int i=0;i<n;++i)
{
    if(a[i][0]=='O' && a[i][1]=='O')
    {
      a[i][0]=a[i][1]='+';
      cout<<"YES\n";
      for(int i=0;i<n;++i) cout<<a[i]<<endl;
      return 0;
    }
    if(a[i][3]=='O' && a[i][4]=='O')
    {
      a[i][3]=a[i][4]='+';
      cout<<"YES\n";
      for(int i=0;i<n;++i) cout<<a[i]<<endl;
      return 0;
    }

}
cout<<"NO\n";
}
