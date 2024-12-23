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
    string s; cin>>s;
    int missMatch=0;
    for(int i=0,j=n-1;i<j;j--,i++){
        if(s[i]!=s[j]) missMatch++;
    }
    string ans(n+1,'0');
    int cnt=0;
    if(missMatch==0) ans[0] = '1';
    for(int i=missMatch;i<=n;i++){
        ans[i] = '1';
        if(n&1 && i+1<=n){
            ans[i+1] = '1';
        }
        i++;
        cnt++;
    }
    for(int i=n-missMatch+1;i<=n;i++) ans[i]= '0';
    
    cout<<ans<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
 
