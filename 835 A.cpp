#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    v1 = s*v1 + 2*t1;
    v2 = s*v2 + 2*t2;
    if(v1<v2)
        cout<<"First";
    else if(v1==v2)
        cout<<"Friendship";
    else
        cout<<"Second";
}
