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
void Binary_search(int low,int high,int x,int n,vi &v){
    int ans = 1;
    while(low<=high){
        int mid = low + (high-low)/2;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(v[i]<mid) cnt+= mid-v[i];
            else break;
        }
        if(cnt<=x){
            ans = max(mid,ans);
            low = mid+1;
        }
        else high = mid-1;
    }
    cout<<ans<<endl;
}
void solve(){
    int n,x; cin>>n>>x;
    vi v(n); f0(i,n) cin>>v[i];
    sort(v.begin(),v.end());
    Binary_search(1,(int)1e12,x,n,v);
    
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
