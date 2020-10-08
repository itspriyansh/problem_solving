#include <bits/stdc++.h>
using namespace std;

int solve(int h, int p){
    int pw = floor(log(p)/log(2));
    int n = pow(2,pw);
    int sm = n*2-1;
    if(n==p || sm>=h) return sm;
    return sm + solve(h-sm, p-n);
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,p;
	    cin>>h>>p;
	    cout<<(solve(h,p)>=h)<<'\n';
	}
	return 0;
}
