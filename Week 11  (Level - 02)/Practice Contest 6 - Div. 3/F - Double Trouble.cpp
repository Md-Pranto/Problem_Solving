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
#define f0(i,n) for (ll i=0;i<n;i++)
#define f1(i,n) for (ll i=1;i<=n;i++)
#define vi vector<int>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
//Optimize is not allowed when I have to take input from input.txt file

void solve(){
    int n; cin>>n; vi x(n),p(n);
    for(auto &i:x) cin>>i;
    for(auto &i:p) cin>>i;
    int x1=1;
    for(int i=0;i<n-1;i++){
        int dist = x[i+1]-x[i];
        if(p[i]>=dist) x1++;
        else break;
    }
    int left = 1;
    for(int i=1;i<n;i++){
        int dist = x[i]-x[i-1];
        if(p[i]>=dist) left++;
        else break;
    }
    int xn = 1;
    for(int  i=n-1;i>=0;i--){
        int dist = x[i]-x[i-1];
        if(p[i]>=dist) xn++;
        else break;
    }
    int right = 1;
    for(int i=n-2;i>=0;i--){
        int dist = x[i+1]-x[i];
        if(p[i]>=dist) right++;
        else break;
    }
    int a = max(x1,left), b= max(xn,right);
    if(a+b>=n) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    clock_t z = clock();
    while(tc--){
        solve();
        //debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    }
    
    
    return 0;
}

