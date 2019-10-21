#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int> > arr(n, vector<int>(m));
    vector<vector<bool> > v(n, vector<bool>(m, false));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> push;
    bool valid=true;
    for(int i=0;i+1<n;i++){
        for(int j=0;j+1<m;j++){
            if(arr[i][j] && arr[i+1][j] && arr[i][j+1] && arr[i+1][j+1]){
                v[i][j]=v[i+1][j]=v[i][j+1]=v[i+1][j+1]=true;
                push.push_back(i);
                push.push_back(j);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] && !v[i][j]) {
                valid=false;
                break;
            }
        }
    }
    if(!valid) cout<<-1;
    else{
        cout<<push.size()/2;
        if(!push.empty()) cout<<endl;
        for(int i=0;i<push.size();i+=2){
            cout<<push[i]+1<<" "<<push[i+1]+1;
            if(i+1<push.size()) cout<<endl;
        }
    }
    return 0;
}
