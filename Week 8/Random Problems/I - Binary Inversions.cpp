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
    int n; cin>>n; vector<int> v(n);
    int firstzero = -1;
    int lastone = -1;
    int cnt1=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(firstzero==-1 && v[i]==0) firstzero=i;
        if(v[i]==1) lastone = i;
        if(v[i]==1) cnt1++;
        if(v[i]==0) sum+=cnt1;
    }
    if(firstzero==-1|| lastone==-1){
        cout<<n-1<<endl; return;
    }
    int ans = sum;
    sum=0; cnt1=0;
    v[firstzero] = 1;
    for(int i=0;i<n;i++){
        if(v[i]==1) cnt1++;
        if(v[i]==0) sum+=cnt1;
    }
    ans = max(ans,sum);
    sum=0; cnt1=0;
    v[firstzero] = 0; v[lastone] = 0;
    for(int i=0;i<n;i++){
        if(v[i]==1) cnt1++;
        if(v[i]==0) sum+=cnt1;
    }
    ans = max(ans,sum);
    cout<<ans<<endl;
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}

