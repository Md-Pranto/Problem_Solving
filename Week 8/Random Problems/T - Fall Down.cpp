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
    int r,c; cin>>r>>c;
    string s[r];
    for(int i=0;i<r;i++) cin>>s[i];
    for(int i=0;i<c;i++){
        for(int k=0;k<r;k++){
            for(int j=0;j<r-1;j++){
                if(s[j][i]=='.' || s[j][i]=='o') continue;
                if(s[j][i]=='*' && s[j+1][i]=='.') swap(s[j][i],s[j+1][i]);
            }
        }
    }

    for(int i=0;i<r;i++){
        cout<<s[i]<<endl;
    }
    //cout<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}

