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
    ll ans = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        ans^= v[i];
    }
    //cout<<ans<<" "<<endl;
    
    for(int i=0;i<n;i++){
        //cout<<(v[i]^ans)<<" ";
        v[i] = (v[i]^ans);
    }
    //cout<<endl;
    ll temp = v[0];
    //cout<<"HERE"<<endl;
    for(int i=1;i<n;i++){
        //cout<<temp<<" "<<v[i]<<" "<<(temp^v[i])<<endl;
        temp^=v[i];
    }
    if(temp==0) cout<<ans<<endl;
    else cout<<-1<<endl;
}
int main(void){
    optimize();
    ll tc=1; cin>>tc;
    while(tc--) solve();
    
    //cout<<endl;
    
    return 0;
}
