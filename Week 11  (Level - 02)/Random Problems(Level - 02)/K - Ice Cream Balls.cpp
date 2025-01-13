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
    int n; cin>>n;
    int low = 2,high = n,ans = LLONG_MAX;
    while(low<=high){
        int mid = low + (high-low)/2;
        int a = sqrt(mid*2);
        int b = a+1;
        if(a*b/2 >n){
            b-=2;
        }
        if(a>b) swap(a,b);
        if(a*b/2>n){
            high = mid-1;
        }
        else {
            low = mid+1;
            ans = b+(n-a*b/2);
        }
    }
    if(ans==LLONG_MAX) ans = 2;
    cout<<ans<<endl;
    
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
