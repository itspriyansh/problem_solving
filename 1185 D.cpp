#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
int n;
cin>>n;
long int a[n];
map<long int ,int> m;
long int b[n];
for(int i=0;i<n;++i)
    {
        cin>>a[i];
        b[i]= a[i];
    }
sort(a,a+n);

if(n>3)
{
map<lli,lli> m;
for(int i =1;i<n;++i)
m[a[i]-a[i-1]]++;

}
else
{
cout<<1<<endl;
}
}
