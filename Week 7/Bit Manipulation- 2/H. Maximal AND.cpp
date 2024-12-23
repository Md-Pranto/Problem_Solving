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

void solve(){
    int n,k; cin>>n>>k;
    
    vector<int> v(n),cnt(31,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<31;i++){
        for(int j=0;j<n;j++){
            if((1LL<<i)&v[j]) cnt[i]++;
        }
    }
    int ans = 0;
    for(int i=30;i>=0;i--){
        if(k+cnt[i]>=n){
            int left = n-cnt[i];
            k-=left;
            ans+= (1LL<<i);
        }
    }
    cout<<ans;
    cout<<endl;
    
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
