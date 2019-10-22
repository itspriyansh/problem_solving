#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
long double a[n];
long long int sum =0;
for(int i=0;i<n;++i)
    {
        cin>>a[i];
        sum+= floor(a[i]);
    }
if(sum<0)
{
    sum = -sum;
    int k = 0;
    for(int i=0;i<sum;++i,++k)
    {
        if(a[k]==floor(a[k]))
            --i;
        else
            ++a[k];
    }
}
for(int i=0;i<n;++i)
cout<<floor(a[i])<<endl;
}
