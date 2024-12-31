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

int main(void){
    optimize();
    ll tc; cin>>tc;
    while(tc--){
        
        ll l; cin>>l;
        
        ll n=0,e=0,w=0,s=0,pain=0,paie=0,paiw=0,pais=0;
        string str="";
        for(int i=0;i<l;i++){
            char c; cin>>c; str.push_back(c);
            if(c=='N') {n++; pain++;}
            else if(c=='E') { e++; paie++;}
            else if(c=='W') {w++; paiw++;}
            else if(c=='S') {s++; pais++;}
        }
        if(l==1 || (l==2 && str[0]!=str[1])){ cout<<"NO"<<endl; continue;}

        if(n>=s) { n-=s; s=0;}
        else {s-=n; n=0;}
        
        if(e>=w) {e-=w; w=0;}
        else { w-=e; e=0;}
        
        if(n%2!=0 || e%2!=0 || w%2!=0 || s%2!=0){ cout<<"NO"<<endl; continue;}
        n/=2; e/=2; w/=2; s/=2;
        if(n==0 && e==0 && w==0 && s==0){
            if(pain && pais){ n++; s++;}
            else if(paie && paiw) {e++; w++;}
        }
        
        for(int i=0;i<l;i++){
            
            if(str[i]=='N' && n>0) { cout<<"H"; n--;}
            else if(str[i]=='E' && e>0) {cout<<"H"; e--; }
            else if(str[i]=='W' && w>0) {cout<<"H"; w--;}
            else if(str[i]=='S' && s>0) {cout<<"H"; s--;}
            else cout<<"R";
        }
        cout<<endl;
        
    }
    
    
    
    //cout<<endl;
    
    return 0;
}
