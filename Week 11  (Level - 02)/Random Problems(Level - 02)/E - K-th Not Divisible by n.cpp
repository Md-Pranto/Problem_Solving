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
ll binary_search(ll n,ll low,ll hi,ll target){
    
    while(low<=hi){
        ll mid = low + (hi-low)/2;
        ll kotoNumUnDiv;
//        if(mid%n!=0) kotoNumUnDiv = mid - (mid/n);
//        else {
//            mid--; kotoNumUnDiv = mid - (mid/n);
//        }
        kotoNumUnDiv = mid - (mid/n);
        //cout<<kotoNumUnDiv<<" "<<mid<<" "<<low<<" "<<hi<<endl;
        if(kotoNumUnDiv==target) return mid;
        if(kotoNumUnDiv<target){
            low = mid+1;
        }
        else hi = mid-1;
        
    }
    return -1;
}
void solve(){
    ll n,target; cin>>n>>target;
    ll ans = binary_search(n, 1,(ll) 1e18,target);
    if(ans%n==0) cout<<ans-1<<endl;
    else cout<<ans<<endl;
}


int main(void){
    optimize();
    int tc; cin>>tc;
    while(tc--) solve();
    

    
    return 0;
}
