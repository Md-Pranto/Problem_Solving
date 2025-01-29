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
#define pb push_back
#define endl '\n'

#define f0(i,n) for (ll i=0;i<n;i++)
#define f1(i,n) for (ll i=1;i<=n;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file

int main(void){
    optimize();
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        //ll mx = 200000+123;
        map<ll,ll> mp;
        ll arr[200000+123] = {0};
        for(int i=0;i<n;i++){
            ll a; cin>>a;
            mp[a]++;
            
        }
        
        for(auto it: mp){
            ll a= it.first;
            for(ll j=a,k=1;k<=n&& j<=n;k++,j+=a){
                arr[j]+=it.second;
            }
        }
        ll ans = -1,ansIndx=-1;
        //maxi*(n+1)
        for(int i=1;i<=n;i++){
            if(ans<arr[i]){
                ansIndx=i;
                ans = arr[i];
            }
        }
        cout<<ans<<endl;
    }

    //cout<<endl;

    return 0;
}
