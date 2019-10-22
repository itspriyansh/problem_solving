#include<bits/stdc++.h>
using namespace std;
int len(int a[],int n)
{
    if(n==1)
        return 1;
    int i = 1;
    for(;i<n;++i)
    {
        if(a[i]<a[i-1])
        {
            i = -1;
            break;
        }
    }
    if(i!=-1)
    return n;
    int b[n/2],c[n/2];
    for(int i=0;i<(n/2);++i)
        {
            b[i] = a[i];
            c[i] = a[i+(n/2)];
        }
        return max(len(b,n/2),len(c,n/2));
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;++i)
cin>>a[i];
cout<<len(a,n)<<endl;
return 0;
}
