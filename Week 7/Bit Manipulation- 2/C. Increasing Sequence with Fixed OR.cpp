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
    vector<int> ans;
    if(n==1){
        cout<<1<<endl;
        cout<<1<<endl; return;
    }
    int cnt=0;
    int len = 63;
    for(int i=0;i<len;i++){
        if((n>>i)&1){
            
            int temp = (n&1LL*(~(1LL<<i)));
            if(temp==0) continue;
            ans.push_back(temp);
        }
    }
    
    cout<<ans.size()+1<<endl;
    for(int i=ans.size()-1;i>=0;i--){
        
        cout<<ans[i]<<" ";
    }
    cout<<n<<endl;
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
 
