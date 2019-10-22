#include <bits/stdc++.h>
#define fi first
#define se second
#define ll long long
#define pii pair <int, int>
#define pll pair <long long, long long>
 
using namespace std;
 
ll sum, ans = 1e17;
int n, a, b, start;
int c[100009][5], vis[100009], ex[4], used[4];
vector <int> G[100009], x;
vector <pii> ans2;
 
void DFS(int v)
{
    x.push_back(v);
 
    vis[v] = 1;
    for(int i = 0; i < G[v].size(); i++)
    {
        if(vis[G[v][i]] == 0)
        {
            DFS(G[v][i]);
        }
    }
}
 
void check()
{
    sum = 0;
    for(int i = 0; i < x.size(); i++)
    {
        int m = i % 3;
        m = ex[m];
 
        sum += c[x[i]][m];
    }
 
    if(sum < ans)
    {
        ans = sum;
        used[0] = ex[0];
        used[1] = ex[1];
        used[2] = ex[2];
    }
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
    cin >> n;
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> c[j][i];
        }
    }
 
    for(int i = 0; i < n - 1; i++)
    {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
 
    for(int i = 1; i <= n; i++)
    {
        if(G[i].size() > 2)
        {
            cout << -1 << "\n";
            return 0;
        }
 
        if(G[i].size() == 1)
        {
            start = i;
        }
    }
 
    DFS(start);
 
    ex[0] = 1;
    ex[1] = 2;
    ex[2] = 3;
    check();
 
    ex[0] = 1;
    ex[1] = 3;
    ex[2] = 2;
    check();
 
    ex[0] = 2;
    ex[1] = 1;
    ex[2] = 3;
    check();
 
    ex[0] = 2;
    ex[1] = 3;
    ex[2] = 1;
    check();
 
    ex[0] = 3;
    ex[1] = 2;
    ex[2] = 1;
    check();
 
    ex[0] = 3;
    ex[1] = 1;
    ex[2] = 2;
    check();
 
    cout << ans << "\n";
 
    for(int i = 0; i < x.size(); i++)
    {
        int m = i % 3;
        m = used[m];
        ans2.push_back({ x[i], m});
    }
    sort(ans2.begin(), ans2.end());
 
    for(int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i].second << " ";
    }
    cout << "\n";
}