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
    int n; cin>>n;
    ll sum=0;
    int odd=0,even=0;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]&1) odd++;
        else even++;
    }
    sort(v.rbegin(),v.rend());
    if(even==0 && odd==1){cout<<0<<endl; return;}
    if(odd&1) odd--;
    for(int i=0;i<n;i++){
        if(v[i]&1 && odd){
            sum+=v[i]; odd--;
        }
        else if(!(v[i]&1) && even>0){
            sum+=v[i]; even--;
        }
    }
    cout<<sum<<endl;
}
int main(void){
    optimize();
    int tc; tc = 1;
    while(tc--) solve();
    
    
    return 0;
}


