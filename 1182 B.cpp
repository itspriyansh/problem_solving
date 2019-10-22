#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
int main()
{
int w,h;
cin>>h>>w;
string s,a[h];
for(int i=0;i<h;++i)
    cin>>a[i];
int r = -1,c = -1;
    for(int i = 1;i<(h-1);++i)
    for(int j = 1;j<(w-1);++j)
{
    if(a[i][j]=='*' && a[i+1][j]=='*' && a[i-1][j]=='*' && a[i][j+1]=='*' && a[i][j-1]=='*')
    {
        r = i;
        c = i;
        break;
    }
}
if(r==-1 || c==-1)
{
    cout<<"NO\n";
    return 0;
}
for(int  row = r-1;row>=0;--row)
    if(a[row][c]=='*')
    a[row][c]='.';
    else
        break;
for(int  row = r+1;row<h;++row)
    if(a[row][c]=='*')
    a[row][c]='.';
    else
        break;
for(int  col = c-1;col>=0;--col)
    if(a[r][col]=='*')
    a[r][col]='.';
    else
        break;
for(int  col = c+1;col<w;++col)
    if(a[r][col]=='*')
    a[r][col]='.';
    else
        break;
a[r][c] ='.';
for(int i=0;i<h;++i)
for(int j=0;j<w;++j)
{
    if(a[i][j]=='*')
    {
        cout<<"NO\n";
        return 0;
    }
}
cout<<"YES\n";
return 0;
}
