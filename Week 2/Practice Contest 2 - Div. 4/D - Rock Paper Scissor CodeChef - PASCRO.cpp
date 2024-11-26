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
    int n; string s,t;
    cin>>n>>s>>t;
    int p1=0,p2=0;
    for(int i=0;i<n;i++){
        char a,b; a= s[i]; b=t[i];
        if(a=='R'){
            if(b=='P') p2++;
            else if(b=='S') p1++;
        }
        if(a=='P'){
            if(b=='R') p1++;
            else if(b=='S') p2++;
        }
        if(a=='S'){
            if(b=='R') p2++;
            if(b=='P') p1++;
        }
    }
    int dif = p2-p1;
    if(dif<0) cout<<0;
    else if(dif==0) cout<<1;
    else{
        cout<<dif/2+1;
        
    }
    cout<<endl;
    
}
int main(void){
    optimize();
    int tc; tc = 1;
    cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}


