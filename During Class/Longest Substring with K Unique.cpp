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
    string s; cin>>s;
    ll k; cin>>k;
    ll n = s.length();
    ll ans = 0;
    ll l=0,r=0;
    ll arr[26]={0};
    while(r<n){
        char c = s[r];
        ll indx = c-'a';
        arr[indx]++;
        int cnt=0;
        for(int i=0;i<26;i++){
            if(arr[i]>0) cnt++;
        }
        if(cnt==k){
            ans = max(ans,r-l+1);
        }
        if(cnt>k){
            while(cnt>k){
                cnt=0;
                c = s[l];
                indx = c-'a';
                arr[indx]--;
                l++;
                for(int i=0;i<26;i++){
                    if(arr[i]>0) cnt++;
                }
            }
            if(cnt==k){
                ans = max(ans,r-l+1);
            }
            
            
        }
        r++;

        
    }
    if(ans) cout<<ans<<endl;
    else cout<<-1<<endl;
    
    
    
}
int main() {
    int tc=1; //cin>>tc;
    while(tc--) solve();

}
