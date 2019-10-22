#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli abso(lli a)
{
    if(a<0)
        return -a;
    return a;
}
lli min(lli a,lli b)
{
return a>b?b:a;
}
int main()
{
lli a[3],d;
cin>>a[0]>>a[1]>>a[2]>>d;
sort(a,a+3);
lli ans  = 0;
ans += abso(min(0 , a[1]-a[0]-d));
ans += abso(min(0 , a[2]-a[1]-d));
cout<<ans<<endl;
    return 0;
}
