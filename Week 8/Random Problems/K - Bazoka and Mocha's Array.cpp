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
    if(is_sorted(all(v))) {
        cout<<"YES"<<endl;
        return;
    }
    vector<int> finale;
    int indx = -1;
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]) continue;
        indx = i;
        break;
    }
    //cout<<indx<<endl;
    for(int i = indx; i<n;i++){
        finale.push_back(v[i]);
    }
    for(int i=0;i<indx;i++){
        finale.push_back(v[i]);
    }

    if(is_sorted(all(finale))) {
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
