#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[101];
for(int i=0;i<101;++i)
a[i]  =0;
int ent;
for(int i=0;i<n;++i){
        cin>>ent;
        a[ent]++;
}
ent = 0;
for(int i=0;i<101;++i){
        ent = max(ent,a[i]);
}
cout<<ent<<endl;
}
