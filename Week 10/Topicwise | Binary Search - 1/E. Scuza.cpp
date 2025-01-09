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
    ll n,q; cin>>n>>q;
    vector<ll> arr(n);
    vector<ll> maxi(n+1);
    vector<ll> pref_sum(n+1,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll nowMax=-1;
    
    for(int i=1;i<=n;i++){
        maxi[i] = max(arr[i-1],nowMax);
        nowMax = max(nowMax,arr[i-1]);
        pref_sum[i] = pref_sum[i-1]+arr[i-1];
    }
//    cout<<endl;
//    for(auto it: maxi){
//        cout<<it<<" ";
//    }
//    cout<<endl;
    while(q--){
        ll laf; cin>>laf;
        ll indx = upper_bound(maxi.begin(),maxi.end(),laf) - maxi.begin();
        cout<<pref_sum[indx-1]<<" ";
    }
    cout<<endl;
}
int main(void){
    optimize();
    ll tc; cin>>tc;
    while(tc--) solve();
    
    
    
    return 0;
}

 
