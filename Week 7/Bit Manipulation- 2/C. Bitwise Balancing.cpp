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

void solve( ){
    int b,c,d; cin>>b>>c>>d;
    bool danger = 0;
    int a=0;
    for(int i=0;i<62;i++){
        int fb=0,fc=0,fd=0;
        if(b&(1LL<<i)) fb = 1;
        if(c&(1LL<<i)) fc = 1;
        if(d&(1LL<<i)) fd = 1;
        if(fb==0 && fc==0 && fd== 0);
        else if(fb==0 && fc==0 && fd== 1) a|=1LL<<i;
        else if(fb==0 && fc==1 && fd== 0) a|=1LL<<i;
        else if(fb==0 && fc==1 && fd== 1) danger = 1;
        else if(fb==1 && fc==0 && fd== 0) danger = 1;
        else if(fb==1 && fc==0 && fd== 1) a|=1LL<<i;
        else if(fb==1 && fc==1 && fd== 0) a|=1LL<<i;
        else if(fb==1 && fc==1 && fd== 1) ;
    }
    if(danger) cout<<-1;
    else cout<<a;
    cout<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
 
