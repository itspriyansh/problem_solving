#include <iostream>
 
using namespace std;
 
int main()
{
    int b,g,n;
    cin>>b>>g>>n;
    int init=(b>=n)?0:n-b, final=(g>=n)?n+1:g+1;
    cout<<final-init<<endl;
    return 0;
}
