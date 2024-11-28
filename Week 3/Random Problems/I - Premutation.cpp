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
    map<int,int> missingPos;
    int n; cin>>n;
    vector<int> v(n-1);
    vector<int> arr[n-1];
    int missing= n*1LL*(n+1)/2*1LL;
    for(int i=0;i<n-1;i++){
        cin>>v[i];
        missing-=v[i];
    }
    //cout<<missing<<" "<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            int a; cin>>a;
            arr[i].push_back(a);
            if(a==missing){
                missingPos[j]++;
            }
        }
    }
    int maxi=-1,maxipos=-1;
    for(auto [val,freq]: missingPos){
        if(freq>maxi){
            maxi = freq;
            maxipos = val;
        }
    }
    int maxiposVal = v[maxipos];
    bool flag = false;
    for(int i=0;i<n-1 && !flag;i++){
        for(int j=1;j<n-1;j++){
            if(arr[i][j-1]==maxiposVal && arr[i][j]==missing){
                flag = true; break;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(i==maxipos && !flag){
            cout<<missing<<" ";
        }
        if(i<n-1) cout<<v[i]<<" ";
        if(i==maxipos && flag){
            cout<<missing<<" ";
        }
    }
    cout<<endl;
    
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}
