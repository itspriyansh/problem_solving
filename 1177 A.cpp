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

#define maxk 10000 // max value of array
using namespace std;
string s;
void fill_s()
{
f1(maxk) s += to_string(i);
}
int main()
{
fio();
fill_s();
int k; cin>>k;
cout<<s[k-1]<<endl;
return 0;
}
