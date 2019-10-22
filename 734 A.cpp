#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string s;
cin>>s;
int a,d;
a=count(s.begin(),s.end(),'A');
d=count(s.begin(),s.end(),'D');
if(a>d)
    cout<<"Anton";
else if(d>a)
    cout<<"Danik";
else
    cout<<"Friendship";
}
