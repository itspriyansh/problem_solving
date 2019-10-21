#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    bool ans=true;
    vector<int> l(n);
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    sort(l.begin(), l.end());
    int next = 1;
    vector<vector<int> > adj(n, vector<int>(2, -1));
    for(int i=0;i<n;i++){
        if(adj[i][0]==-1){
            adj[i][0]=next;
            adj[next++][1]=i;
        }if(adj[i][1]==-1){
            adj[i][1]=next;
            adj[next++][0]=i;
        }
        if(l[i]>=l[adj[i][0]]+l[adj[i][1]]){
            ans = false;
            break;
        }
        if(next>=n) next--;
    }
    // for(int i=0;i<n;i++){
    //     cout<<i<<"->"<<adj[i][0]<<"->"<<adj[i][1]<<endl;
    // }
    if(ans){
        cout<<"YES\n";
        vector<bool> visited(n, false);
        int cur = 0;
        while(!visited[cur]){
            visited[cur] = true;
            cout<<l[cur]<<" ";
            cur = adj[cur][1];
        }
    }else{
        cout<<"NO";
    }
    return 0;
}
