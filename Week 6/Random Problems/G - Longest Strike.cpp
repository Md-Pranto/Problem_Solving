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
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    sort(v.begin(),v.end());
    ll l = -1,r=-1;
    ll mxl = -1,mxr=-1;
    
    for(int i=0;i<n;i++){
        if(mp[v[i]]<k) continue;
        if(l==-1){
            l=v[i];
        }
        if(i==n-1 || v[i+1]-v[i]>1 || mp[v[i+1]]<k){
            r = v[i];
            if(r-l>=mxr-mxl){
                mxr= r; mxl = l;
            }
            l=-1,r=-1;
        }
        
    }
    if(mxl==-1) cout<<-1;
    else cout<<mxl<<" "<<mxr;
    cout<<endl;
    
    
}
int main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}

