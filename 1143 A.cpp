#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;++i)
    cin>>a[i];
int one = count(a,a+n,1);
int zero = count(a,a+n,0);
for(int i=0;i<n;++i)
{
    if(a[i])
        --one;
    else
        --zero;
    if(one==0 || zero==0)
    {
        cout<<i+1;
        return 0;
    }
}
return 0;
}
