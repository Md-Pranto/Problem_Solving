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
    vector<int> v(n);
    map<int,int> mp;
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int mx_freq = 0;
    for(auto [key,cnt]:mp){
        mx_freq = max(mx_freq,cnt);
    }
    int ans = 0;
    while(mx_freq<n){
        int rem = n-mx_freq;
        int add = mx_freq;
        ans++;
        ans+= min(add,rem);
        mx_freq+= min(add,rem);
    }
    cout<<ans<<endl;
    
}
int main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}
