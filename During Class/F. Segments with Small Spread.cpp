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
    ll n,k; cin>>n>>k;
    ll l=0,r=0;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll cnt=0;
    multiset<ll> st;
    while(r<n){
        st.insert(v[r]);
        ll small = *st.begin();
        ll big = *st.rbegin();
        if(big-small<=k){
            cnt+= r-l+1;
        }
        else {
            while(l<=r && big-small>k){
                auto it = st.find(v[l]); l++;
                st.erase(it);
                small = *st.begin();
                big = *st.rbegin();
            }
            if(big-small<=k){
                cnt+= r-l+1;
            }
        }
        r++;
    }
    
    cout<<cnt<<endl;
}
int main() {
    int tc=1; //cin>>tc;
    while(tc--) solve();

}
