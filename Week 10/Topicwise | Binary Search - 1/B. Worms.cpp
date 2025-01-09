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

int main(void){
    optimize();
    ll n; cin>>n;
    ll arr[n];
    vector<ll> pref_sum(n+1,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        pref_sum[i] = pref_sum[i-1]+arr[i-1];
    }
    //for(auto val : pref_sum) cout<<val<<" ";
    //cout<<endl;
    ll tc; cin>>tc;
    while(tc--){
        ll q; cin>>q;
        cout<<lower_bound(pref_sum.begin(),pref_sum.end(),q)-pref_sum.begin()<<endl;
    }
    
    return 0;
}

 
