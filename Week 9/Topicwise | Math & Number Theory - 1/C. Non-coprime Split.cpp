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
int prime(int n){
    int ans = -1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ans = i; return ans;
        }
    }
    
    
    
    return ans;
}
void solve(){
    int l,r; cin>>l>>r;
    if(r<=3){
        cout<<-1<<endl; return;
    }
    if(l==r && (r&1)==1){
        int ans = prime(l);
        if(ans==-1) {cout<<-1<<endl; return;}
        cout<<ans<<" "<<l-ans<<endl;
        return;
    }
    if(l<=r){
        if(r&1) r--;
        cout<<2<<" "<<r-2<<endl;
    }
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
 
