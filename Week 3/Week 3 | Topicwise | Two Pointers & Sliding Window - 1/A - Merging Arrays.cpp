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
    int n,m; cin>>n>>m;
    vector<int> v(n),k(m);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int j=0;j<m;j++) cin>>k[j];
    int l=0,r=0;
    while(l<n && r<m){
        if(v[l]<=k[r]){
            cout<<v[l]<<" "; l++;
        }
        else{
            cout<<k[r]<<" "; r++;
        }
    }
    if(l==n && r==m){
        return;
    }
    if(l==n){
        for(int i=r;i<m;i++){
            cout<<k[i]<<" ";
        }
    }
    else if(r==m){
        for(int i=l;i<n;i++){
            cout<<v[i]<<" ";
        }
    }

}
int main(void){
    optimize();
    int tc=1; //cin>>tc;
    while(tc--){
        solve();
    }
    cout<<endl;
    return 0;
}
