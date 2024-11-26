#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--){
        if((s[i]=='0' && s[j]=='1') ||(s[j]=='0' && s[i]=='1') ) continue;
        else break;
    }
    int dif = j-i;
    if(dif==0){
        if(n&1) cout<<1;
        else cout<<0;
    }
    else cout<<j-i+1;
    cout<<endl;
    
}
int main(void){
    int tc; cin>>tc;
    while(tc--) solve();
    
    
    
}
