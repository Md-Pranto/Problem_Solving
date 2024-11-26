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
    int n; cin>>n; string s; cin>>s;
    if(n!=5){
        cout<<"NO"<<endl; return;
    }
    string asol = "Timur";
    map<string,bool> mp;
    for(int i=0;i<5;i++){
        string ans="aaaaa";
        for(int j=0;j<5;j++){
            if(i==j) continue;
            for(int k=0;k<5;k++){
                if(i==k || j==k) continue;
                for(int l=0;l<5;l++){
                    if(i==l||j==l||k==l) continue;
                    for(int m=0;m<5;m++){
                        if(i==m||j==m||k==m||l==m) continue;
                        ans[0]=asol[i];
                        ans[1]=asol[j];
                        ans[2]=asol[k];
                        ans[3]=asol[l];
                        ans[4]=asol[m];
                        mp[ans] = true;
                    }
                    
                }
            }
        }
    }
//    for(auto [val,flag]: mp){
//        cout<<val<<" ";
//    }cout<<endl;
    if(mp.find(s)!=mp.end()) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
