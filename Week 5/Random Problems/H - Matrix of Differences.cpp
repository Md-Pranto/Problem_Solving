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
    int cnt=0;
    int sq = n*n;
    int l = 1,r = sq;
    vector<int> v;
    for(int i=1;i<=sq;i++){
        if(i%2){
            v.push_back(l);
            l++;
        }
        else{
            v.push_back(r);
            r--;
        }
    }
    l = 0;
    for(int i=1;i<=n;i++){
        if(i%2){
            for(int j=l;j<l+n;j++) cout<<v[j]<<" ";
            cout<<endl;
            l+=n;
        }
        else{
            for(int j=l+n-1;j>=l;j--) cout<<v[j]<<" ";
            cout<<endl;
            l+=n;
        }
    }
    
}
int main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
