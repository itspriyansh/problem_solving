#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;++i) cin>>a[i];
int way = 1,cp = 1;
vector<int> v;
for(int i = 1;i<n;++i)
{
    if(a[i]==(a[i-1]+1))
    cp = a[i];
    else
    {
        v.push_back(cp);
        cp = 1;
        ++way;
    }
}
v.push_back(cp);
cout<<way<<endl;
for(auto &i : v)
    cout<<i<<" ";
}
