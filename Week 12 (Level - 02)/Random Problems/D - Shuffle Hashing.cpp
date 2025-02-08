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
#define f0(i,n) for (ll i=0;i<n;i++)
#define f1(i,n) for (ll i=1;i<=n;i++)
#define vi vector<int>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
//Optimize is not allowed when I have to take input from input.txt file
map<int,int> mp;
vector<int> prime;
void solve(){
    int n; cin>>n;
    vi v(n); f0(i,n) cin>>v[i];
    map<int,int> find;
    set<int> st;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<prime.size();j++){
            if(v[i]%prime[j]==0){
                find[v[i]] = prime[j];
                st.insert(prime[j]);
                //cout<<v[i]<<" "<<prime[j]<<endl;
                break;
            }
        }
        
    }
    cout<<st.size()<<endl;
    int l=1;
    for(auto val: st){
        mp[val] = l;
        //cout<<val<<" "<<l<<endl;
        l++;
    }
    for(auto val: v){
        cout<<mp[find[val]]<<" ";
    }
    cout<<endl;
    find.clear();
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    
    for(int i=2;i<=33;i++){
        bool flag = false;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){flag = true; break;}
        }
        if(!flag) prime.push_back(i);
    }
    int l=1;
    for(auto val: prime){
        mp[val] = l;
        //cout<<val<<" "<<l<<endl;
        l++;
    }//cout<<endl;
    //clock_t z = clock();
    //tc=0;
    while(tc--){
        solve();
        //debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    }
    
    
    return 0;
}
