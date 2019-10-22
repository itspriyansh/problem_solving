#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
string n;
cin>>n;
int ans = -1;
if(n.length()>2)
for(int i=0;i<(n.length()-2);++i)
{
    for(int j=i+1;j<(n.length()-1);++j)
    {
        for(int k = j+1;k<n.length();++k)
        {
            int temp = (n[i]-'0')*100+(n[j]-'0')*10+n[k]-'0';
            if(temp%8==0)
            {
                ans = temp;
                i = n.length();
                j =n.length();
                k=n.length();
            }
        }
    }
}
if(ans==-1)
if(n.length()>1)
for(int j=0;j<(n.length()-1);++j)
{
        for(int k = j+1;k<n.length();++k)
        {
            int temp =(n[j]-'0')*10+n[k]-'0';
            if(temp%8==0)
            {
                ans = temp;
                j =n.length();
                k=n.length();
            }
        }
}
if(ans==-1)
for(int k = 0;k<n.length();++k)
        {
            int temp =n[k]-'0';
            if(temp%8==0)
            {
                ans = temp;
                k=n.length();
            }
        }
if(ans==-1)
    cout<<"NO"<<endl;
else
    cout<<"YES\n"<<ans<<endl;

return 0;
}
