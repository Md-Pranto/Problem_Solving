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
    vector<int> v(n+1);
    set<pair<int,char>> st;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    string s="";
    int cnt1 =0;
    for(int i=1;i<=n;i++){
        char c; cin>>c;
        st.insert({v[i],c});
        if(c=='1') cnt1++;
    }
    int l = n-cnt1;
    int r = n;
    map<int,int> mp;
    for(auto it = st.rbegin();it!=st.rend();it++){
        pair<int,char> p = *it;
        int rating = p.first; char button = p.second;
        if(button=='1'){
            mp[rating] = r; r--;
        }
        else {
            mp[rating] = l; l--;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<mp[v[i]]<<" ";
    }
    cout<<endl;
    
    
}
int main() {
    int tc=1; cin>>tc;
    while(tc--) solve();

}
