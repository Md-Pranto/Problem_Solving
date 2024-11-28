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
    ll negcnt = 0;
    priority_queue<ll> pq;
    ll ans=0;
    for(int i=0;i<n;i++){
        ll a; cin>>a;
        if(a<0){
            negcnt++;
            pq.push(0-a);
            ans+=-a;
        }
        else{ pq.push(a);
            ans+=a;
        }
    }
    ll sum=0;
    //cout<<negcnt<<" "<<endl;
    if(negcnt&1){
        while(pq.size()!=1){
            ll top = pq.top(); pq.pop();
            //cout<<top<<" ";
            sum+=top;
        }
        ll top = pq.top();
        cout<<sum-top;
    }else{
        cout<<ans;
    }
    cout<<endl;
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}
