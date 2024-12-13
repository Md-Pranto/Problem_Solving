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
    int n; cin>>n;
    int cnt0=0;
    bool boro = false,one=false;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a==0){
            cnt0++;
        }
        if(a==1){
            one = true;
        }
        if(a>1) boro=true;
    }
    int notZero = n-cnt0;
    if(notZero>=cnt0-1){
        cout<<0;
    }
    else{
        if(!one){
            cout<<1;
        }
        else{
            if(boro){
                cout<<1;
            }
            else cout<<2;
        }
    }
    cout<<endl;
}
int main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
