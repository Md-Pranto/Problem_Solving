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
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll st = -1;
    ll end = -1;
    cout<<endl;
    for(ll i=0,j=n-1;i<n;i++,j--){
        if(v[i]>0 && st==-1){
            st = i;
        }
        if(v[j]>0 && end==-1) end = j;
    }
    //cout<<st<<" "<<end<<" ";
    if(st==-1 && end==-1) {
        cout<<0<<endl; return;
    }
    ll cnt=0;
    for(ll i = st;i<=end;i++){
        if(v[i]<0) cnt++;
    }
    cout<<cnt<<endl;
    
    
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}
