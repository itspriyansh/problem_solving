#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    int64_t a,b,n,temp;
    cin>>t;
    while(t-->0){
        cin>>a>>b>>n;
        vector<int64_t> arr(3);
        arr[0]=a;
        arr[1]=b;
        arr[2]=a^b;
        cout<<arr[n%3]<<endl;
    }
    return 0;
}
