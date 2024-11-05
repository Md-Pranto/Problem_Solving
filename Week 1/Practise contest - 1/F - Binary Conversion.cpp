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
    int len,k; cin>>len>>k;
    string s,t;cin>>s>>t; int s1,s0,t1,t0; s1=s0=t1=t0=0;
    int mileNai = 0;
    int sameSame=0;
    for(int i=0;i<len;i++){
        if(s[i]=='0') s0++;
        else s1++;

        if(t[i]=='0') t0++;
        else t1++;
        if(s[i]!=t[i]) mileNai++;
        if(s[i]==t[i]) sameSame++;
        
    }
    
    if(s1!=t1 || s0!=t0) {cout<<"NO"<<endl; return;}
    if(len==2){
        if((k%2==0 && s==t)||(k%2!=0 &&s[0]==t[1] && s[1]==t[0])){
            cout<<"YES";
        }
        else cout<<"NO";
        cout<<endl;
        return;
    }
    mileNai/=2;
    if(mileNai<=k){
        cout<<"YES";
        
    }
    else cout<<"NO";
    cout<<endl;
}

int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--)solve();

    return 0;
}
