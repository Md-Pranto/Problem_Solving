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
    ll initial = 0;
    int mid = n/2;
    string s="";
    for(int i=0,j=n-1;i<n;i++,j--){
        char c; cin>>c;
        s+=c;
        if(c=='L') initial+=i;
        else initial+=j;
        
    }
    //cout<<initial<<endl;
    int l=0;
    ll ans = initial;
    int changed = 0;
    //n=0;
    priority_queue<int> pq;
    
    while(l<n){
        
        if(l<mid){
            if(s[l]=='L'){
                changed++;
                pq.push(n-2*l-1);
                //cout<<n-2*l-1<<" ";
            }
            
        }
        else if(l>=mid){
            if(s[l]=='R'){
                changed++;
                pq.push(-n+2*l+1);
            }
            
        }
//        if(l==mid && n&1 && s[l]=='R'){
//            changed++;
//            pq.push(1);
//        }
        
        l++;
    }

//    while(!pq.empty()){
//        cout<<pq.top()<<" "; pq.pop();
//    }
    while(!pq.empty()){
        int top = pq.top(); pq.pop();
        ans+=top;
        cout<<ans<<" ";
    }
    for(int i=changed;i<n;i++){
        cout<<ans<<" ";
    }
    cout<<endl;
}
//while(l<n){
//
//    if(l<mid){
//        if(s[l]=='L'){
//            changed++;
//            ans-=l;
//            cout<<ans<<" "<<l<<" "<<endl;
//            ans+= n-l-1;
//            cout<<ans<<" "<<l<<" "<<endl;
//            //cout<<ans<<" ";
//
//        }
//
//    }
//    else if(l>mid){
//        if(s[l]=='R'){
//            changed++;
//            ans-= (n-l-1);
//            ans+=l;
//            cout<<ans<<" ";
//            //n=0;
//        }
//
//    }
//    if(l==mid && n&1 && s[l]=='R'){
//        ans+=1;
//        changed++;
//        cout<<ans<<" ";
//
//    }
//
//    l++;
//}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    return 0;
}


