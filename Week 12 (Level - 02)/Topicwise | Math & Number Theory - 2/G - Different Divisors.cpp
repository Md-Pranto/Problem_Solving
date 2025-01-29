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
vi prime;
void solve(){
    int d; cin>>d;
    int mul = 1;
    int div1 = 1+d;
    div1 = *lower_bound(all(prime), div1);
    int div2 = div1+d;
    div2 = *lower_bound(all(prime), div2);
    cout<<div1*div2<<endl;
    
}
int32_t main(void){
    optimize();
    vector<int> v(mx,1);
    v[0] = 0;

    for(int i=2;i<mx;i++){
        if(v[i]>0){
            prime.push_back(i);
            for(int j=i*2;j<mx;j+=i){
                v[j] = 0;
            }
        }
    }
    
    int tc = 1; cin>>tc;
    //clock_t z = clock();
    while(tc--){
        solve();
        //debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    }
    
    
    return 0;
}
