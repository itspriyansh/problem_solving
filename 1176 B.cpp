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

#define gc getchar
using namespace std;

int main()
{
fio();
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
ll c = 0;
int rem1=0,rem2=0;
ll ent;
fi(n)
{
cin>>ent;
if((ent%3)==0)
    ++c;
else
    if((ent%3)==1)
         ++rem1;
    else ++rem2;
}

ll m =min(rem1,rem2);
c+=m ;
rem1-=m;
rem2-=m;

c+= rem1/3;
c+=  rem2/3;
cout<<c<<endl;

}

return 0;
}

