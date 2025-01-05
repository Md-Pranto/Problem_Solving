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
    vector<int> v(n+1);
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        mp[v[i]] = i;
    }
    int cnt=0;
    if(k==1) {
        cout<<0<<endl; return;
    }
    for(int i=1;i<=n;i++){
        if(i==v[i]) continue;
        int diff = abs(i-mp[i]);
        if(diff%k!=0){
            cnt++;
            //cout<<i<<" "<<v[i]<<" "<<mp[i]<<endl;
        }
    }
    if(cnt==0){
        cout<<0;
    }
    else if(cnt==2) cout<<1;
    else cout<<-1;
    cout<<endl;
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
