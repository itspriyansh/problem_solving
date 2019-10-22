#include<bits/stdc++.h>

using namespace std;
int main()
{
long int n;
cin>>n;
long int b = 0;
int d[5] = {100,20,10,5,1};
for(int i=0;i<5;++i)
{
    b+= n/d[i];
    n = n%d[i];
}
cout<<b;
}
