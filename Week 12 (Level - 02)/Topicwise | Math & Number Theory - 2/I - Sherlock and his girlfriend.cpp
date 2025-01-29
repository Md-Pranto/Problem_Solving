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
const int mx = 1e5+7;

void solve(){
    
    
    
}
int32_t main(void){
    optimize();
    vi v(mx,1);
    for(int i=2;i<mx;i++){
        if(v[i]>0){
            for(int j=i*2;j<mx;j+=i){
                v[j]= 0;
            }
        }
    }
    int n; cin>>n;
    if(n+1<4) cout<<1<<endl;
    else cout<<2<<endl;
    for(int i=2;i<=n+1;i++){
        if(v[i]>0) cout<<1<<" ";
        else cout<<2<<" ";
    }cout<<endl;
    
    return 0;
}
