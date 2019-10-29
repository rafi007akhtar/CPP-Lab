#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ppb pop_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define vpii vector<pii >
#define vpll vector<pll >
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
#define uset unordered_set
#define umap unordered_map
#define all(x) x.begin(), x.end()
#define revall(x) x.rbegin(), x.rend()
#define rep(i, j, k) for(int i = j; i < k; i++)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define T int tt; cin>>tt; while(tt--)

const ll MOD = (ll)(1e9+7);
const int inf = (int)INFINITY;
const ll INF = (ll)INFINITY;
const int MAX = (int)1e5;

/* PROBLEM LINK: https://www.codechef.com/problems/FIRESC */

//global
ll ce=0;


void dfs(int u, bool visited[], vector<int> d[])
{
    visited[u]=true;
    ce=(ce + 1)%MOD;
    vector<int>::iterator it;
    for(it=d[u].begin();it!=d[u].end();it++)
    {
		if(!visited[*it])
		{
		    dfs(*it,visited,d);
		}
	}
}

int main() {
    fastio;
    T {
        int n,m,cc=0,u,v;
        ll ans=1;
        cin>>n>>m;
        bool visited[n+1]={false};
        vector<int> d[n+1];
        for(int i = 0; i < m; i++)
        {
    		cin >> u >> v;
    		d[u].push_back(v);
    		d[v].push_back(u);
    	}
    	for(int i = 1; i <= n; i++)
    	{
    		if(!visited[i])
    		{
    		    cc++;
    		    ce=0;
    		    dfs(i,visited,d);
    		    ans=((ans%MOD)*(ce%MOD))%MOD;
    		}
    	}
    	cout << cc << " " << ans << endl;
    }
    return 0;
}
