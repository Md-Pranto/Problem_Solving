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
    ll n; cin>>n;
    vector<ll>v;
    ll total = n*(n-1)/2;
    for(int i=0;i<total;i++){
        ll a; cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll laf = n-1;
    vector<ll> ans;
    for(ll i=0;i<total;){
        ans.push_back(v[i]);
        i+=laf;
        laf--;
    }
    for(auto val: ans){
        cout<<val<<" ";
    }
    cout<<ans.back();
    
    cout<<endl;
    
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}
