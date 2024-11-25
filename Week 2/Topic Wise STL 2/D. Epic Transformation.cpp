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
    priority_queue<int> pq;
    int n; cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int a; cin>>a; mp[a]++;
    }
    for(auto [key,freq] : mp){
        pq.push(freq);
    }
//    for(auto [key,freq] : mp){
//        cout<<key<<" "<<freq<<endl;
//    }
    while(!pq.empty() && pq.size()>=2){
        int a,b; a = pq.top(); pq.pop();
        b = pq.top(); pq.pop();
        a--; b--; if(a) pq.push(a);
        if(b) pq.push(b);
    }
    if(!pq.empty()) cout<<pq.top()<<endl;
    else cout<<0<<endl;
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}

 
