#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string ans;
if(n&1)
{
    n/=2;
    while(n--)
    {
        ans = ans + "I hate that I love that ";
    }
    ans = ans+"I hate it";
}
else
{
    n/=2;
    while(--n)
    {
        ans = ans + "I hate that I love that ";
    }
    ans = ans+"I hate that I love it";
}
cout<<ans;
}
