#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[3];
cin>>a[0]>>a[1]>>a[2];
sort(a,a+3);
int ans = 0;
while((a[0]+a[1])<=a[2])
{
    ++ans;
    ++a[1];
}
cout<<ans;
}
