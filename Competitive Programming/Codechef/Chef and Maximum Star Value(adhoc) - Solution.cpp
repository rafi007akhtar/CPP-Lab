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

/*PROBLEM LINK: https://www.codechef.com/OCT19B/problems/MSV/*/

int main() {
    fastio;
    int n,temp;
    T {
        cin >> n;
        vector<int> arr;
        int ans=0;
        bool freq[1000001]={false};
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int i=n-1;
        while(i>=0){
            while(freq[arr[i]]){
                i--;
            }
            temp=arr[i];
            int tans=0;
            for(int j=0;j<i;j++){
                if(arr[j]%temp==0){
                    tans++;
                    freq[arr[j]]=true;
                }
            }
            ans=max(ans,tans);
            i--;
        }
        cout << ans << endl;
    }
    return 0;
}
