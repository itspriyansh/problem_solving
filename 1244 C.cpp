#include <bits/stdc++.h>
#define fi first
#define se second
#define ll long long
#define pii pair <int, int>
#define pll pair <long long, long long>
 
using namespace std;
 
ll n, p, d, w;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
    cin >> n >> p >> w >> d;
 
    for(int y = 0; y <= w - 1; y++)
    {
        if(p - y * d >= 0 && (p - y * d) % w == 0 && (p - y * d) / w + y <= n)
        {
            cout << (p - y * d) / w << " " << y << " " << n - (p - y * d) / w - y << "\n";
            return 0;
        }
    }
 
    cout << -1 << "\n";
}