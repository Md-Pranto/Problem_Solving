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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int gcd1=0,gcd2=0;
    for(int i=0;i<n;i+=2){
        gcd1 = gcd(gcd1,v[i]);
    }
    for(int i=1;i<n;i+=2){
        gcd2 = gcd(gcd2,v[i]);
    }
    if(gcd1==gcd2){
        cout<<0<<endl; return;
    }
    bool flag1 = false,flag2=false;
    for(int i=1;i<n;i+=2){
        if(v[i]%gcd1==0){
            flag1 = true; break;
        }
    }
    for(int i=0;i<n;i+=2){
        if(v[i]%gcd2==0){
            flag2 = true; break;
        }
    }
    if(flag1==false){
        cout<<gcd1;
    }
    else if(flag2==false){
        cout<<gcd2;
    }
    else cout<<0;
    cout<<endl;
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
 
