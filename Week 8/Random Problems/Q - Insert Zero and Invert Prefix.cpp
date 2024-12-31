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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    if(v[n-1]==1){
        cout<<"NO"<<endl; return;
    }
    
    
    vector<int> sari;
    int zero=0,one = 0;
    for(int i=n-1;i>=0;i--){
        if(v[i]==0) zero++;
        else{
            if(zero){
                sari.push_back(0); sari.push_back(zero);
                zero = 0;
            }
        }
        if(v[i]==1)one++;
        else{
            if(one){
                sari.push_back(1); sari.push_back(one);
                one = 0;
            }
            
        }
    }
    if(one){sari.push_back(1); sari.push_back(one);}
    else if(zero){sari.push_back(0); sari.push_back(zero);}
    
    int hate = 0;
    int len = sari.size();
    vector<int> ans;
    for(int i=0;i<len-1;i+=2){
        int val = sari[i];
        int cnt = sari[i+1];
        if(val==0){
            hate = 1;
            if(cnt>1){
                while(cnt>1){
                    ans.push_back(0); cnt--;
                }
            }
        }
        int temp = cnt;
        if(val==1){
            while(cnt>0){
                ans.push_back(0); cnt--;
            }
            ans.push_back(temp);
            hate = 0;
        }
        
    }
    if(hate==1) ans.push_back(0);
    cout<<"YES"<<endl;
    for(auto val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    
    
    
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}

