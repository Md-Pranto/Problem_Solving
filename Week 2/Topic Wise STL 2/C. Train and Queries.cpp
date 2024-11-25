#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc; cin>>tc;
    while(tc--){
        int n,m; cin>>n>>m;
        map<int,set<int>> mp;
        for(int i=1;i<=n;i++){
            int x; cin>>x;
            mp[x].insert(i);
        }
        while(m--){
            int l,r; cin>>l>>r;
            if((mp.find(l)==mp.end()) || (mp.find(r)==mp.end())){
                cout<<"NO"<<endl;
            }
            else {
                int stLeft , endRight;
                stLeft = *mp[l].begin();
                endRight = *mp[r].rbegin();
                if(stLeft<endRight) cout<<"YES";
                else cout<<"NO";
                cout<<endl;
                
            }

        }

    }
    return 0;

}
