#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b,c;
cin>>a>>b>>c;
if(c==0)
{
    if((a-b)>0)
        cout<<"+"<<endl;
    else if((a-b)<0)
        cout<<"-"<<endl;
    else cout<<0<<endl;
}
else
{
    int x = a-b+c;
    int y = a-b-c;
    if(x>0 && y>0)
        cout<<"+"<<endl;
    else if(x<0 && y<0)
        cout<<"-"<<endl;
    else cout<<"?"<<endl;
}
}
