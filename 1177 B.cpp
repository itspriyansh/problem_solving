//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github : https://github.com/becomeahacker

#include<bits/stdc++.h>
typedef long long int lli;
typedef long long ll;
#define pb push_back
#define pf push_front
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007
#define fi(n) for(int i=0;i<n;++i)
#define fj(n) for(int j=0;j<n;++j)
#define f1(n) for(int i=1;i<n;++i)
#define repi(a,b) for(int i=a;i<b;++i)
#define repj(a,b) for(int j=a;j<b;++j)
#define pii pair<int,int>
#define vi vector<int>
#define fio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tc int t;cin>>t;for(int tc=0;tc<t;++tc)
using namespace std;
int digits(lli k)
{
    int d = 0;
    while(k!=0) {d++; k/=10;}
    return d;
}

lli base(lli k)
{
    lli ans =0, add = 9,d=1;
    while(k>ans)
    {
        ans += (add*d);
        add*=10;
        ++d;
    }
    add/=10;
    d-=1;
    return ans-add*d;
}
int main()
{
fio();
lli k;
cin>>k;
lli b = base(k)+1;
k-=b;
while(k>=digits(b))
{
    k-=digits(b);
    ++b;
}
cout<<to_string(b)[k]<<endl;


return 0;
}
