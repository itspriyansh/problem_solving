Copy
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, open=1;
    string str;
    cin>>n>>str;
    stack<char> s;
    bool valid=true;
    for(char c: str){
        if(c=='(') s.push(c);
        else{
            if(s.empty()){
                if(open) open--;
                else{
                    valid=false;
                    break;
                }
            }else s.pop();
        }
    }
    if((!open && s.size()!=1)||(open && !s.empty())) valid=false;
    if(valid) cout<<"Yes";
    else cout<<"No";
    return 0;
}
