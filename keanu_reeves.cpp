#include <iostream>
#include <cstring>
 
using namespace std;
 
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int count=0;
    for(char c: s){
        if(c=='0'){
            count--;
        }else{
            count++;
        }
    }
    if(count || s.empty()){
        cout<<"1\n"<<s<<endl;
    }else{
        cout<<"2\n";
        for(int i=0;i+1<n;i++){
            cout<<s[i];
        }
        cout<<" "<<s.back()<<endl;
    }
 
    return 0;
}
