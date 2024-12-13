#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m; cin>>n>>m;
    string s,t; cin>>s>>t;
    int sa = 0,ta = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='a') sa++;
    }
    for(int i=0;i<m;i++){
        if(t[i]=='a') ta++;
    }
    if(sa==ta){
        int sb=0,tb=0;
        for(int i=0;i<n;i++){
            if(s[i]=='b') sb++;
            else break;
        }
        for(int i=0;i<m;i++){
            if(t[i]=='b') tb++;
            else break;
        }
        if(sb==tb) cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"NO";
    cout<<endl;
    
}
int main() {
    int tc; cin>>tc;
    while(tc--) solve();

}
