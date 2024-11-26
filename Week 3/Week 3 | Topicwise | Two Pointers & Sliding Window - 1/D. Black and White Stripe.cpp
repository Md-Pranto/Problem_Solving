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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int cntb=0;
    for(int i=0;i<k;i++){
        if(s[i]=='B') cntb++;
    }
    int maxi = cntb;
    int l=0,r=k;
    while(r<n){
        if(s[r]=='B') cntb++;
        if(s[l]=='B') cntb--;
        l++; r++;
        maxi = max(maxi,cntb);
    }
    cout<<k-maxi<<endl;
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--){
        solve();
    }
    
    
    return 0;
}
