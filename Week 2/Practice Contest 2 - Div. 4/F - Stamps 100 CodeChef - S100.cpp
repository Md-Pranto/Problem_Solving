#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int len = 3;
    char c = s[n-1];
    int pre =-1;
    for(int i=0;i<n;i++){
        if(s[i]=='0') pre = i;
        else break;
    }
    if(pre==n-1 || pre==n-2 || pre==n-3) {
        cout<<s<<endl; return;
    }
    
    
    for(int i=0;i<=pre;i++){
        cout<<"0";
    }
    cout<<"1";
    pre++;
    pre++;
    for(int i=pre;i<n;i++) cout<<"0";
    
    cout<<endl;
}
int main() {
    int tc; cin>>tc;
    while(tc--) solve();

}
