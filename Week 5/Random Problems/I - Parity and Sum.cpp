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
    int n; cin>>n;
    priority_queue<ll> maxiOdd;
    priority_queue<ll,vector<ll>,greater<ll>> miniEven;
    for(int i=0;i<n;i++){
        ll a; cin>>a;
        if(a&1) maxiOdd.push(a);
        else miniEven.push(a);
    }
    if(maxiOdd.size()==0 || miniEven.size()==0){
        cout<<0<<endl; return;
    }
    int cnt=0;
    ll cntEven = miniEven.size();
    while(!miniEven.empty()){
        ll odd= maxiOdd.top(); maxiOdd.pop();
        ll even = miniEven.top(); miniEven.pop();
        if(odd>even){
            maxiOdd.push(odd+even);
        }
        else{
            cout<<cntEven+1<<endl;
            return;
        }
        cnt++;
    }
    cout<<cnt<<endl;
}
int main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
