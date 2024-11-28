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
int n,m;
bool isValid(int x,int y){
    return (x>=0 && x<n && y>=0 && y<m);
}
void solve(){
    cin>>n>>m;
    int v[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vector<ll> diagonal[n];
    ll maxi =-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll ans=v[i][j];
            for(int k=i-1,l=j-1;isValid(k,l); k--,l--){
                ans+= v[k][l];
            }
            for(int k=i+1,l=j+1;isValid(k,l); k++,l++){
                ans+= v[k][l];
            }
            
            for(int k=i-1,l=j+1;isValid(k,l); k--,l++){
                ans+= v[k][l];
            }
            for(int k=i+1,l=j-1;isValid(k,l); k++,l--){
                ans+= v[k][l];
            }
            maxi = max(ans,maxi);
        }
    }
    cout<<maxi<<endl;
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}
