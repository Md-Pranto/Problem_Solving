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
    ll n,m,q; cin>>n>>m>>q;
    set<int> st;
    map<int,bool> mp;
    
    for(int i=0;i<m;i++){
        int a; cin>>a;
        st.insert(a);
        mp[a] = true;
    }
    int start = *st.begin(), last = *st.rbegin();
    while(q--){
        int pos; cin>>pos;
        if(mp[pos]){
            cout<<0<<endl; continue;
        }
        else if(pos<start){
            //cout<<"here "<<endl;
            cout<<start-1<<endl;
        }
        else if(pos>last){
            //cout<<"upps "<<endl;
            cout<<n-last<<endl;
        }
        else {
            auto it = st.upper_bound(pos);
            int high = *it;
            it--;
            int low = *it;
            //cout<<"Oh shit "<<endl;
            cout<<(high-low)/2<<endl;
        }
        
        
    }
    
    
}
int main() {
    int tc=1; cin>>tc;
    while(tc--) solve();

}


 
