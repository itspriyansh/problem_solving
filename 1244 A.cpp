#include <bits/stdc++.h>
#define fi first
#define se second
#define ll long long
#define pii pair <int, int>
#define pll pair <long long, long long>
 
using namespace std;
 
int t, a, b, c, d, k;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d >> k;
 
        if(a % c == 0)
        {
            a = a / c;
        }
        else
        {
            a = a / c + 1;
        }
 
        if(b % d == 0)
        {
            b = b / d;
        }
        else
        {
            b = b / d + 1;
        }
 
        if(a + b <= k)
        {
            cout << a << " " << b << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}