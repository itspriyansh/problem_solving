#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int t,a,b,c,d,k,e,f;
    cin>>t;
    while(t-->0){
        bool valid=true;
        cin>>a>>b>>c>>d>>k;
        e=ceil((double)a/c);
        f=ceil((double)b/d);
        if(e+f>k) cout<<-1<<endl;
        else cout<<e<<" "<<f<<endl;
    }
    return 0;
}
