#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int a = 0;
for(int i=0;i<s.length();++i)
    if(s[i]=='a') ++a;
cout<<min(2*a-1 , int(s.length()))<<endl;
}
