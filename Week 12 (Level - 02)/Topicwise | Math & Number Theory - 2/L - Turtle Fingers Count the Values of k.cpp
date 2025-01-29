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
vector<ll> divisor(ll l){
    vector<ll> v;
    ll n = sqrt(l);
    for(int i=1;i<=n;i++){
        if(l%i==0){
            v.push_back(i);
            if(l/i !=i) v.push_back(l/i);
            
        }
    }
    return v;
}



int main(void){
    optimize();
    ll t; cin>>t;
    while(t--){
        ll a,b,l,compare; cin>>a>>b>>l;
        vector<ll> div = divisor(l);
        vector<ll> va,vb;
        for(int i=0;i<21;i++){
            compare = pow(a,i);
            if(compare<=1e6) va.push_back(compare);
            else break;
        }
        for(int i=0;i<21;i++){
            ll compare = pow(b,i);
            if(compare<=1e6) vb.push_back(compare);
            else break;
        }
       
        ll ksize = div.size(),asize = va.size(),bsize = vb.size();
        ll count =0;
        for(ll i=0;i<(ll)ksize;i++){
            ll flag = 0;
            for(ll j=0;j<(ll)asize;j++){
                for(ll m=0;m<(ll)bsize;m++){
                    if(div[i]*va[j]*vb[m] == l){
                        count++;
                        flag = 1;
                        break;
                    }
                }
                if(flag==1) break;
                
            }
        }
        
        
        cout<<count;
        cout<<endl;
    }
    
    return 0;
}
