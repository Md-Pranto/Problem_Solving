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
    int n,l,r; cin>>n>>l>>r;
    vi v(n); f0(i,n) cin>>v[i]; sort(all(v));
    int cnt=0;
    f0(i,n-1){
        int mini = l-v[i];
        int maxi = r-v[i];
        int miniIndx = -1,maxiIndx = -1;
        auto low = lower_bound(all(v),mini);
        auto high = upper_bound(all(v),maxi);
        if(low==v.end()){
            continue;
        }
        miniIndx = max(low-v.begin()+0LL,i+1LL); high = prev(high);
        if(v[miniIndx]+v[i]<l || v[miniIndx]+v[i] > r) continue;
        
        maxiIndx = max(high-v.begin()+0LL,i+1LL);
        //cout<<"for " <<v[i]<<" ->"<<miniIndx<<" "<<maxiIndx<<endl;
        cnt+= maxiIndx-miniIndx+1;
    }
    cout<<cnt<<endl;
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
 
