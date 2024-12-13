#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    string s="";
    for(int i=0;i<n;i++){
        char a;cin>>a; s+=a;
    }
    if(s[0]=='0' && s[n-1]=='1') cout<<2*n-2;
    else cout<<2*n-1;
    cout<<endl;
    
    
    
}
int main() {
    int tc; cin>>tc;
    while(tc--) solve();

}
//2
//2
//0 1
//2
//1 1
