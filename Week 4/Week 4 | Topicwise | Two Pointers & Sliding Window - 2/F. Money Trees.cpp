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
#define endl '\n'

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file

void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> apple(n),hi(n);
    for(int i=0;i<n;i++) cin>>apple[i];
    for(int i=0;i<n;i++) cin>>hi[i];
    ll l=0,r=0;
    ll ans =0,sum=0;
    while(r<n){
        sum+= apple[r];
        
        while(l<r && ((hi[r-1]%hi[r]!=0)|| sum>k)){
            sum-= apple[l]; l++;
        }
        
        if(sum<=k){
            ans = max(ans,r-l+1);
        }
        r++;
    }
    
    cout<<ans<<endl;
        
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}
