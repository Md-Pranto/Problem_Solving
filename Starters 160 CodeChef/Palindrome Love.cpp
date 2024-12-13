#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int len = s.length();
    int i=0,j=len-1;;
    while(i<=j){
        if(s[i]!=s[j]) {
            return false;
        }
        i++; j--;
    }
    return true;
}
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    if(n==2){
        if(s[0]!=s[1]) cout<<-1;
        else cout<<0;
        cout<<endl; return;
    }
    if(s[0]!=s[n-1]){
        string s1 = s.substr(0,n-1);
        string s2 = s.substr(1,n-1);
        if(isPalindrome(s1) && isPalindrome(s2)){
            cout<<-1;
        }
        else cout<<1;
        cout<<endl;
        return;
    }
    int l=1, r=n-2;
    while(l<r){
        if(s[l]!=s[r]){
            cout<<1<<endl; return;
        }
        l++; r--;
    }
    cout<<0<<endl;
    
}
int main() {
    int tc; cin>>tc;
    while(tc--) solve();

}
