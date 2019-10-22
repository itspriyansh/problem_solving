#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
int n;
cin>>n;
int a[n];
int b,c,d,e;
for(int i=0;i<n;++i)
{
cin>>b>>c>>d>>e;
a[i] = b+c+d+e;
}
int john = a[0];
stable_sort(a,a+n,cmp);
for(int i=0;i<n;++i)
    if(a[i]==john)
    {
        cout<<i+1<<endl;
        return 0;
    }
}
