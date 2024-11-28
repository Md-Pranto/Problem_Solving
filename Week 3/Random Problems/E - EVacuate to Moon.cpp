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
    int n,outlet,hour; cin>>n>>outlet>>hour;
    vector<int> v(n);
    priority_queue<int> capacity;
    priority_queue<int> provide;
    for(int i=0;i<n;i++){
        cin>>v[i];
        capacity.push(v[i]);
    }
    for(int i=0;i<outlet;i++){
        int a;cin>>a;
        provide.push(a);
    }
    ll ans = 0;
    while(!capacity.empty() && !provide.empty()){
        ll cap = capacity.top(); capacity.pop();
        ll pro = provide.top(); provide.pop();
        ans+= min(pro*hour,cap);
    }
    cout<<ans<<endl;
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}

