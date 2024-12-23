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
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file
int cnt[33];
void call(int x){
    x++;
    for(int i=0;i<=32;i++){
        int p = 1LL<<i;
        int occur = x/p;
        cnt[i]+= (occur/2)*p;
        if(occur&1LL) cnt[i]+=x%p;
    }
}


void solve(){
    int n,m; cin>>n>>m;
    int x = max(n-m,0LL), y = n+m;
    memset(cnt,0,sizeof(cnt));
    call(x-1);
    for(auto &val: cnt) val = -val;
    call(y);
    int ans = 0;
    for(int i=0;i<=32;i++) if(cnt[i]) ans|=1LL<<i;
    cout<<ans<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
