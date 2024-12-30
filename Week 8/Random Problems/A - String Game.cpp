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
    int n; cin>>n;
    string s; cin>>s;
    stack<char> st;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(st.size()>=1){
            char c1 = st.top(); st.pop();
            char c2 = s[i];
            if(c1!=c2) cnt++;
            else {
                st.push(c1);
                st.push(c2);
            }
            
        }
        else st.push(s[i]);
    }
    if(cnt&1) cout<<"Zlatan";
    else cout<<"Ramos";
    cout<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
