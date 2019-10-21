#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int tt=0;tt<t;tt++){
        int n, m;
        cin>>n>>m;
        if(m*2<=n){
            cout<<m*2<<endl;
        }else{
            cout<<n<<endl;
        }
    }
 
    return 0;
}
