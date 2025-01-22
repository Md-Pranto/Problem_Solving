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
const int inf = 1e9;
void solve(){
    int n,k; cin>>n>>k; vi v(n); f0(i,n) cin>>v[i]; sort(all(v));
    vi b(n),c(n),d(n);
    for(int i=0;i<n;i++){
        int low = 0,high = inf,ans = inf;
        while(low<=high){
            int mid = low + (high-low)/2;
            int val = v[i]+(k*mid*2);
            if(val>=v[n-1]){
                ans = min(ans,mid);
                high = mid-1;
            } else low = mid+1;
            int val1 = v[i]+k*((ans-1)*2);
            int val2 = v[i]+k*(ans*2);
            b[i] = max(v[i],val1);
            c[i] = val2;
        }
    }
    for(int i=0;i<n;i++){
        if(v[n-1]-b[i]<k) d[i] = b[i];
        else d[i] = c[i];
    }
    int max_val = *max_element(d.begin(), d.end());
    int min_val = *min_element(d.begin(), d.end());
    if (max_val - min_val >= k) cout << -1 << endl;
    else cout << max_val << endl;
        
    
    
    
    
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    //clock_t z = clock();
    while(tc--){
        solve();
        //debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    }
    
    
    return 0;
}
