#include <bits/stdc++.h>
#define fi first
#define se second
#define ll long long
#define pii pair <int, int>
#define pll pair <long long, long long>
 
using namespace std;
 
int t, n, l, r;
string s;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> s;
 
        l = 0;
        r = 0;
 
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                r = i + 1;
            }
        }
 
        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] == '1')
            {
                l = i + 1;
            }
        }
 
        // cout << l << " " << r << "\n";
 
        if(l != 0 && r != 0)
        {
            cout << max(n, max(2 * r, 2 * (n - l + 1))) << "\n";
        }
        else
        {
            cout << n << "\n";
        }
    }
}