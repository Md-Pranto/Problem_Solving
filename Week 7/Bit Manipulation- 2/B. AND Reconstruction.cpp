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
//#define int long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file

void solve(){
    int n; cin>>n;
    vector<int> a(n),b(n-1);
    for(int i=0;i<n-1;i++) cin>>b[i];
    a[0] = b[0]; a[n-1] = b[n-2];
    for(int i=1;i<n-1;i++){
        a[i] = (b[i]|b[i-1]);
    }
    bool flag = true;
    for(int i=1;i<n;i++){
        if((a[i]&a[i-1])!=b[i-1]){
            flag = false; break;
        }
    }
    if(!flag){
        cout<<-1<<endl; return;
    }
    for(auto val: a) cout<<val<<" ";
    
    cout<<endl;
    
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
