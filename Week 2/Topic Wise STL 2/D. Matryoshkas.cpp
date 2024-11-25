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
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        mp[a]++;
    }
    //cout<<"here oh"<<endl;
    for(auto [val,freq]: mp){
        if(mp.find(val + 1)!= mp.end()){
            if(mp[val+1] > freq){
                mp[val]=0;
                //cout<<"inside"<<endl;
            }
            else mp[val] = freq- mp[val+1];
        }
        //cout<<"outside"<<endl;
    }
    //cout<<"here"<<endl;
    int cnt=0;
    for(auto [val,freq]:mp){
        if(freq>0) cnt+=freq;
    }
    cout<<cnt<<endl;
    
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    cout<<endl;
    
    return 0;
}
 
