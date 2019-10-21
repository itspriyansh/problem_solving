#include <iostream>
 
using namespace std;
 
int main()
{
    int q;
    cin>>q;
    while(q-->0){
        int b,p,f;
        cin>>b>>p>>f;
        int h,c;
        cin>>h>>c;
        if(b%2) b--;
        int ans = 0;
        if(h>=c){
            int qun = min(p, b/2);
            ans += h*qun;
            b -= 2*qun;
            qun = min(f, b/2);
            ans+=c*qun;
        }else{
            int qun = min(f, b/2);
            ans+=c*qun;
            b-=2*qun;
            // cout<<"ans->"<<ans<<endl;
            qun=min(p,b/2);
            ans+=h*qun;
        }
        cout<<ans;
        if(q>0) cout<<endl;
    }
 
    return 0;
}
