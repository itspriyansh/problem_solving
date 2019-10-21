#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mini=arr.back(), count=0;
        for(int i=n-2;i>=0;i--){
            if(mini<arr[i]) count++;
            else if(mini>arr[i]) mini=arr[i];
        }
        cout<<count<<endl;
    }
    return 0;
}
