#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int64_t n, m;
        cin>>n>>m;
        int64_t q=n/m;
        int64_t init = 0;
        for(int i=1;i<10;i++){
            init += (m*i)%10;
        }
        int64_t res = q/10*init;
        for(int i=1, l=q%10;i<=l;i++){
            res += (m*i)%10;
        }
        cout<<res<<endl;
    }
    return 0;
}
