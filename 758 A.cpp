#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
long a[n];
long long int sum = 0,m;
for(int i=0;i<n;++i)
    {cin>>a[i]; sum+=a[i];}
m = *max_element(a,a+n);
cout<<m*n-sum<<endl;
}
