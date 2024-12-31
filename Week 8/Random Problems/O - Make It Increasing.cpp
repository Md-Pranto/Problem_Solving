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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(v[j]>=v[j+1]){
                while(v[j]>=v[j+1] && v[j]!=0){
                    cnt++; v[j]/=2;
                }
            }
        }
    }
    bool flag= true;
    for(int i=0;i<n-1;i++){
        if(v[i]>=v[i+1]){
            flag = false; break;
        }
    }
//    for(auto val: v){
//        cout<<val<<" ";
//    }
//    cout<<endl;
    if(flag) cout<<cnt;
    else cout<<-1;
    cout<<endl;
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}

