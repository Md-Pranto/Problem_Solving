#include<bitset>
#include<set>
#include<stdio.h>
#include<string.h>
#include<stack>
#include<queue>
#include<cstring>
#include<vector>
#include<map>
#include<deque>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include <iostream>
#include<utility>
#include<climits>
#include<numeric>
using namespace std;
typedef long long ll;
typedef unsigned long ul;
#define int long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define f0(i,n) for (ll i=0;i<n;i++)
#define f1(i,n) for (ll i=1;i<=n;i++)
#define vi vector<int>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
//Optimize is not allowed when I have to take input from input.txt file

void solve(){
    int n,q; cin>>n>>q; vi v(n); f0(i,n) cin>>v[i];
    sort(v.rbegin(),v.rend());
    vi pref_sum(n+1,0);
    for(int i=1;i<=n;i++){
        pref_sum[i] = pref_sum[i-1]+v[i-1];
    }
    while(q--){
        int target; cin>>target;
        auto val = lower_bound(all(pref_sum),target);
        if(val==pref_sum.end()) cout<<-1;
        else cout<<val-pref_sum.begin();
        cout<<endl;
    }
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    clock_t z = clock();
    while(tc--){
        solve();
        //debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    }
    
    
    return 0;
}
 
