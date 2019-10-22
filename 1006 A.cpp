#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a;
while(n--)
{
    cin>>a;
    if(a&1)
        cout<<a<<" ";
    else
        cout<<a-1<<" ";
}
}
