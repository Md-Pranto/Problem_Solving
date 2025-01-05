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
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file

void solve(){
    int n; cin>>n;
    vector<int> v[1001];
    for(int i=1;i<=n;i++){
        int a; cin>>a;
        v[a].push_back(i);
    }
    vector<int> only;
    for(int i=1;i<=1000;i++){
        if(v[i].size()>0) only.push_back(i);
    }
    int maxi = -1;
    int sz = only.size();
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            if(gcd(only[i],only[j])==1){
                int maxiIndx1 = v[only[i]][v[only[i]].size()-1];
                int maxiIndx2 = v[only[j]][v[only[j]].size()-1];
                maxi = max(maxi,maxiIndx1+maxiIndx2);
            }
            
            
            
        }
    }
    cout<<maxi<<endl;
    
    
    

}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
 
