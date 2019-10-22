#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
int q;
cin>>q;
while(q--)
{
    int n;
    lli k;
    cin>>n>>k;
    lli ent;
    map<lli,lli>m;
    vector<lli> v;
    for(int i=0;i<n;++i)
    {
        cin>>ent;
        if(m[ent]==0)
        {
            v.push_back(ent);
            m[ent] = 1;
        }
    }
    lli maxi =*max_element(v.begin(),v.end())+k;
    lli mini = *min_element(v.begin(),v.end());
    lli hi = min(maxi,(lli)100000000);
    lli lo = (mini>k)?(mini-k):mini;
    lli mid,ans = -1;
    while(lo<=hi)
    {
        mid = lo + (hi-lo)/2;
        bool flag = true;
        for(auto &i: v)
        {
            if(abs(i-mid)>=k)
            flag = false;
        }
        if(flag)
        {
            lo = mid+1;
            ans = mid;
        }
        else
            hi = mid -1;
    }
    cout<<ans<<endl;
}

return 0;
}
