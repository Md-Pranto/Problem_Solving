#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,q; cin>>n>>q;
    int arr[n+1];
    for(int i=1;i<=n;i++) cin>>arr[i];
    set<int> st;
    int dp[n+1];
    for(int i=n;i>0;i--){
        st.insert(arr[i]);
        dp[i] = st.size();
    }
    while(q--){
        int a;  cin>>a;
        cout<<dp[a]<<endl;
    }
    
    
    return 0;
}
