#include<bits/stdc++.h>
using namespace std;
int dsum(int a)
{
    int s = 0;
    while(a!=0)
    {
        s+= a%10;
        a/=10;
    }
    return s;
}
int main()
{
   int a;
   cin>>a;
   while((dsum(a)%4)!=0)
   {
        ++a;
   }
   cout<<a;

}
