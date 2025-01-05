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
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
//Optimize is not allowed when I have to take input from input.txt file

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int a=0,b=0,c=0,d=0;
    int no =0;
    for(auto ch: s){
        if(ch=='?'){no++; continue;}
        if(ch=='A') a++;
        else if(ch=='B') b++;
        else if(ch=='C') c++;
        else if(ch=='D') d++;
    }
    a = min(n,a); b = min(n,b); c= min(n,c); d = min(n,d);
    cout<<a+b+c+d<<endl;
    
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
 
