#include <iostream>
 
using namespace std;
 
int main(){
    int odd=0, even=0, n, x;
    cin>>n;
    while(n-->0){
        cin>>x;
        if(x%2) odd++;
        else even++;
    }
    cout<<min(odd, even);
    return 0;
}
