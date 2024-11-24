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
    multiset<ll> st;
    ll n; cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        st.insert(i+1);
    }
    ll l=0,r=n-1;
    while(l<r){
        ll small = *st.begin();
        ll big = *st.rbegin();
        if(small!=v[l] && big!=v[l] && small!=v[r] && big!=v[r]){
            cout<<l+1<<" "<<r+1<<endl; return;
        }
        else {
            if(st.size()>0 && (small==v[l] || big==v[l])){
                //cout<<"small  -> "<<v[l]<<endl;
                st.erase(v[l]);
                l++;
            }
            if(st.size()>0 && (small==v[r] || big==v[r])){
                //cout<<"big  -> "<<v[r]<<endl;
                st.erase(v[r]);
                r--;
            }
        }
        
    }
    cout<<-1<<endl;
    
    
}
int main() {
    int tc=1; cin>>tc;
    while(tc--) solve();

}
