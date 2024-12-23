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
    string s,t; cin>>s>>t;
    vector<int> v;
    for(int i=n-1,j=0;i>=0;i--,j++){
        if(s[i]=='1'){
            v.push_back(j);
        }
    }
//    for(auto val: v){
//        cout<<val<<" ";
//    }
   // cout<<endl;
    bool flag = true;
    for(int i=0,j=n-1;i<n;i++,j--){
        if(s[i]=='0' && t[i]=='1'){
            if(lower_bound(all(v),j)==v.end()){
                flag = false; break;
            }
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
 
