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
void solve(){
    ll n,m; cin>>n>>m;
    string s,t; cin>>s>>t;
    ll ans = INT_MAX;
    for(int i=0;i<=n-m;i++){
        ll cnt=0;
        for(int j=0;j<m;j++){
            int nums = s[i+j]-'0';
            int numt = t[j]-'0';
            if(nums>numt) swap(nums,numt);
            cnt+= min(10+nums-numt,numt-nums);
        }
        ans = min(cnt,ans);
    }
    cout<<ans<<endl;
}
int main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
