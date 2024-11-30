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
    int n,s; cin>>n>>s;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    ll sum = accumulate(arr.begin(), arr.end(), 0LL);
    if(sum<s){ cout<<-1<<endl; return;}
    int last = n;
    vector<int> next_one(n);
    for(int i=n-1;i>=0;i--){
        next_one[i] = last;
        if(arr[i]==1) last = i;
    }
    int ans = INT_MAX , curr=0,l = 0;
    queue<int> q;
    for(int i=0;i<n;i++){
        q.push(arr[i]);
        curr+= arr[i];
        while(!q.empty() && curr>s){
            curr-= q.front();
            q.pop();
            l++;
        }
        if(curr==s){
            ans = min(ans,l+(n-next_one[i]));
        }
    }
    cout<<ans<<endl;
    
    
}
int main(void){
    optimize();
    int tc; cin>>tc;
    while(tc--) solve();
    
    
    
    return 0;
}

 
