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
    vector<ll> v(n);
    set<ll> st;
    for(int i=0;i<n;i++){
        cin>>v[i];
        st.insert(v[i]);
    }
    sort(v.begin(),v.end());
    vector<ll> unique;
    for(auto val: st){
        unique.push_back(val);
    }
    ll sz = unique.size();
    vector<ll> pref;
    ll sum=unique[0];
    pref.push_back(sum);
    vector<ll> bad;
    for(int i=1;i<sz;i++){
        if(sum<unique[i]){
            pref.push_back(unique[i]);
            sum+= unique[i];
        }
    }
    sz = pref.size();
    cout<<n-sz<<endl;
    for(int i=0;i<sz;i++){
        cout<<pref[i]<<" ";
    }
    int l =0;
    for(int i=0;i<n;i++){
        if(l<sz && v[i]==pref[l]){
            l++;
        }
        else cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
