#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
        cout<<6-n<<endl;
    map<string,string> m;
    m["purple"] = "Power";
    m["green"] = "Time";
    m["blue"] = "Space";
    m["orange"] = "Soul";
    m["red"] = "Reality";
    m["yellow"] = "Mind";
    string s;
    while(n--)
    {
    cin>>s;
    m[s] = "";
    }

    for(auto &i :m)
        if(i.second!="")
        cout<<i.second<<endl;
}
