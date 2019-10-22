#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define inf 1e17
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
lli n;
cin>>n;
lli x[n+1],h[n+1];
for(int i=0;i<n;++i) cin>>x[i]>>h[i];
x[n] = inf;
h[n] = 0;
lli stay[n],left[n],right[n];
stay[0] = 0;
left[0] = 1;
right[0] =0;
if(n>0)
if((x[0]+h[0])<x[1]) right[0] = 1;
for(int i=1;i<n;++i)
{
//stay i
    stay[i] = max(stay[i-1],max(left[i-1],right[i-1]));
//left i
    left[i] = 0;
    if((x[i]-h[i])>x[i-1])
    left[i] = max(stay[i-1],left[i-1])+1;
    if((x[i]-h[i])>(x[i-1]+h[i-1])) left[i] =  max(left[i],right[i-1]+1);

//right i
    right[i] = 0;
    if((x[i]+h[i])<x[i+1])
    right[i] = max(max(left[i-1],stay[i-1]),right[i-1])+1;
}
//cout<<"Stay : "; for(int i=0;i<n;++i) cout<<stay[i]<<" "; cout<<endl;
//cout<<"Left : "; for(int i=0;i<n;++i) cout<<left[i]<<" "; cout<<endl;
//cout<<"Rigt : "; for(int i=0;i<n;++i) cout<<right[i]<<" "; cout<<endl;
cout<<max(left[n-1],max(stay[n-1],right[n-1]))<<endl;
return 0;
}
