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
#define pb push_back
#define endl '\n'

#define f0(i,n) for (ll i=0;i<n;i++)
#define f1(i,n) for (ll i=1;i<=n;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file
void solve(){
    int n; cin>>n;
    vector<ll> arr(n+1,0); vector<ll> l; vector<ll> r;
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    string s; cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='L') l.push_back(i+1);
        if(s[i]=='R') r.push_back(i+1);
    }
    int len1=l.size(),len2=r.size();
    ll sum=0;
    if(len1>=len2){
        int mini = len2;
        int i=0,j=len2-1;
        while(i<mini){
            if(l[i]<r[j]){
                sum+=arr[r[j]]-arr[l[i]-1];
                i++; j--;
            }
            else break;
        }
        
        
    }
    else{
        
        int mini = len1;
        int i=0,j=len2-1;
//        for(auto it: l){
//            cout<<it<<" ";
//        }
//        cout<<endl;
//        for(auto it: r){
//            cout<<it<<" ";
//        }
        //cout<<endl;
        while(i<mini){
            if(l[i]<r[j]){
                sum+=arr[r[j]]-arr[l[i]-1];
                //cout<<sum<<" "<<" "<<l[i]<<" "<<r[j]<<endl;
                i++; j--;
                
            }
            else {
                //cout<<l[i]<<" "<<r[j]<<endl;
                break;
                
            }
        }
        
        
    }
    cout<<sum<<endl;
}
int main(void){
    optimize();
    int tc; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}

 
