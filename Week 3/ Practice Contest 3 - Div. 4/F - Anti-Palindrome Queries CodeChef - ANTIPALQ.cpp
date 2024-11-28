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
    ll n,q;cin>>n>>q;
    vector<ll>v(n+1),cnt1(n+1),cnt2(n+2),cnt3(n+3);
    cnt1[0]=0,cnt2[0]=0,cnt3[0]=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]==1){
            cnt1[i] = cnt1[i-1]+1;
            cnt2[i] = cnt2[i-1];
            cnt3[i] = cnt3[i-1];
        }
        else if(v[i]==2){
            cnt1[i] = cnt1[i-1];
            cnt2[i] = cnt2[i-1]+1;
            cnt3[i] = cnt3[i-1];
        }
        else if(v[i]==3){
            cnt1[i] = cnt1[i-1];
            cnt2[i] = cnt2[i-1];
            cnt3[i] = cnt3[i-1]+1;
        }
    }
    while(q--){
        ll l,r; cin>>l>>r;
        if((r-l+1)&1){
            cout<<"NO"<<endl; continue;
        }
        ll c1 = 0,c2=0,c3=0;
        c1 = cnt1[r]-cnt1[l-1];
        c2 = cnt2[r]-cnt2[l-1];
        c3 = cnt3[r]-cnt3[l-1];
        if(c1+c2==c3 || c2+c3==c1 || c1+c3==c2){
            cout<<"YES";
        }
        else cout<<"NO";
        cout<<endl;
        
    }
    
    
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}
