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
    int n,k; cin>>n>>k;
    int srt = ceil(sqrt(n));
    vector<int> v;
    deque<int> q;
    map<int,bool> mp;
    for(int i=1;i<=srt;i++){
        if(n%i==0){
            v.push_back(i);
            mp[i] = true;
            int temp = n/i;
            if(temp!=i) {
                q.push_front(temp);
            }
        }
        
    }
    while(!q.empty()){
        if(mp.find(q.front())==mp.end()) v.push_back(q.front());
        q.pop_front();
    }
//    for(auto val: v){
//        cout<<val<<" ";
//    }
//    cout<<endl;
    int sz = v.size();
    if(k>sz) cout<<-1;
    else{
        cout<<v[k-1];
        
    }
    cout<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; //cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
 
