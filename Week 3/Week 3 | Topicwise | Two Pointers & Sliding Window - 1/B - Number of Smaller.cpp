#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n1,n2; cin>>n1>>n2;
    vector<int> v1(n1),v2(n2);
    for(int i=0;i<n1;i++) cin>>v1[i];
    for(int i=0;i<n2;i++) cin>>v2[i];
    int l=0,r=0;
    int cnt=0;
    vector<int> ans(n2);
    while(l<n1 && r<n2){
        if(v1[l]<v2[r]){
            cnt++; l++;
        }
        else {
            ans[r] = cnt;
            r++;
        }
        if(l==n1){
            for(int i=r;i<n2;i++){
                ans[i] = cnt;
            }
        }
    }
    for(int i=0;i<n2;i++) cout<<ans[i]<<" ";
    return 0;
}
