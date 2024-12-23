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
string intToString(int n){
    string ans = "";
    while(n>0){
        if(n&1) ans+='1';
        else ans+='0';
        n/=2;
    }
    reverse(all(ans));
    return ans;
}
int power(int a,int n){
    int ans = 1;
    while(n){
        if(n&1){
            ans*=a;
        }
        n>>=1;
        a*=a;
    }
    return ans;
    
    
}
void solve(){
    int x; cin>>x;
    string s = intToString(x);
    string s1="11";
    int ans = 0,indx =0;
    for(int i=0;i<s.size();i++){
        if(s[i]==s1[indx]) indx++;
        if(indx==2){
            ans = i+1; break;
        }
    }
    //cout<<"HER";
    int res = 0;
    if(indx<2){
        cout<<1<<endl;
        return;
    }
    for(int i=ans;i<s.size();i++){
        if(s[i]=='0') res++;
    }
    int ans1 = power(2,res);
    cout<<ans1<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
