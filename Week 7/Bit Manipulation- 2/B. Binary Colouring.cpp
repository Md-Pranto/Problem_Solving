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
//#define int long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file

void solve(){
    int n; cin>>n;
    vector<int> v;
    int x = n;
    while(x>0){
        if(x&1) v.push_back(1);
        else v.push_back(0);
        x>>=1;
    }
    v.push_back(0);
    for(int i=0;i<v.size()-1;i++){
        if(v[i]==1 && v[i+1]==1){
            
            for(int j=i;j<v.size();j++){
                
                if(v[j]==0){
                    v[i] = -1;
                    v[j] = 1;
                    break;
                }
                else v[j] = 0;
                
                
                
            }
            
        }
        
    }
    cout<<v.size()<<endl;
    for(auto val: v) cout<<val<<" ";
    cout<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
