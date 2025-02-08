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
#define joss cout << "YES" << endl
#define shit cout << "NO" << endl
#define all(x) x.begin(),x.end()
#define f0(i,n) for (ll i=0;i<n;i++)
#define f1(i,n) for (ll i=1;i<=n;i++)
#define vi vector<int>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
//Optimize is not allowed when I have to take input from input.txt file
const int mx = 1e6+7;
vector<int> v(mx,true);
vector<int> lp(mx,0),hp(mx,0);
void solve(){
    int n; cin>>n;
    vi arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int num = arr[i];
        while(num>1){
            int prime_factor = hp[num];
            while(num%prime_factor==0){
                num/=prime_factor;
                mp[prime_factor]++;
            }
            
        }
        
        
    }
    bool danger = false;
    for(auto [val,cnt]:mp){
        if(cnt%n!=0) {danger = true; break;}
    }
    if(!danger) joss;
    else shit;
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    //clock_t z = clock();

    v[1] = false;
    for(int i=2;i<mx; i++){
        if(v[i]){
            lp[i] = hp[i] = i;
            for(int j= 2*i;j<mx;j+=i){
                v[j] = false;
                hp[j] = i;
                if(lp[j]==0){
                    lp[j] = i;
                }
            }
            
        }
    }
    while(tc--){
        solve();
        //debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    }
    
    
    return 0;
}
