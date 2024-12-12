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
    ll n,m; cin>>n>>m;
    if(m<n){cout<<"NO"<<endl; return;}
    ll rem = m%n;
    ll div = 1LL*m/n;
    if((n&1 && m&1) || (n&1 && !(m&1))){
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            if(i==n){
                cout<<div+rem<<endl; break;
            }
            cout<<div<<" ";
        }
    }
    else if(!(n&1) && !(m&1)){
        cout<<"YES"<<endl;
        for(int i=1;i<=(n-2);i++){
            cout<<1<<" ";
        }
        ll baki = m-(n-2);
        cout<<baki/2<<" "<<baki/2<<endl;
    }
    else cout<<"NO"<<endl;
    
}
int main(void){
    optimize();
    ll tc=1; cin>>tc;
    while(tc--) solve();
    
    //cout<<endl;
    
    return 0;
}
