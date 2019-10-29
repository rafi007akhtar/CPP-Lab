#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
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

/* PROBLEM LINK: https://www.codechef.com/OCT18B/problems/CCIRCLES */

int main()
{
    fastio;
    int n,q,lx[1000],ly[1000],lr[1000],i,j,k,c,d,cd[1000000]={0},l,md;
    long double x,mi,ma,y;
    cin>>n>>q;
    i=0;
    while(i<n)
    {
        cin>>lx[i]>>ly[i]>>lr[i];
        j=i-1;
        while(j>=0)
        {
            x=sqrt(pow(lx[i]-lx[j],2)+pow(ly[i]-ly[j],2));
            if(x>lr[i]+lr[j])
            {
                mi=x-lr[i]-lr[j];
                ma=x+lr[i]+lr[j];
            }
            else if(x+min(lr[i],lr[j])<=max(lr[i],lr[j]))
            {
                mi=max(lr[i],lr[j])-x-min(lr[i],lr[j]);
                ma=2*max(lr[i],lr[j])-mi;
            }
            else
            {
                mi=0;
                ma=x+lr[i]+lr[j];
            }
            l=int(ceil(mi));
            md=int(floor(ma));
            cd[l]++;
            cd[md+1]--;
            j--;
        }
        i++;
    }
    i=1;
    while(i<1000000)
    {
        cd[i]=cd[i]+cd[i-1];
        i++;
    }
    while(q>0)
    {
        cin>>d;
        cout<<cd[d]<<"\n";
        q--;
    }
    return 0;
}
