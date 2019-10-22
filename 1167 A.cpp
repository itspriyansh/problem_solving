#include<bits/stdc++.h>
using namespace std;
string solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<(n-10);++i)
        if(s[i]=='8')
        return "YES";
    return "NO";
}
int main()
{
int t;
cin>>t;
while(t--)
{
    cout<<solve()<<endl;
}
}
