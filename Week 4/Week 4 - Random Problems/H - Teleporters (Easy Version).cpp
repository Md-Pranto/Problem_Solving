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
    ll n,money; cin>>n>>money;
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    for(int i=1;i<=n;i++){
        ll a; cin>>a;
        ll cost = a+i;
        pq.push(cost);
    }
    ll cnt=0;
    while(!pq.empty()){
        ll top = pq.top(); pq.pop();
        if(top>money) break;
        else {
            cnt++;
            money-=top;
        }
        
    }
    cout<<cnt<<endl;
    
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}