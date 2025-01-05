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
#define int long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file

void solve(){
    int n; cin>>n; vector<int> divisor;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divisor.push_back(i);
        }
        int temp = n/i;
        if(n%temp==0) divisor.push_back(temp);
    }
//    for(auto val: divisor){
//        cout<<val<<" ";
//    } cout<<endl;
    int ans = n;
    pair<int,int> mainAns = {1,n};
    int sz = divisor.size()-1;
    for(int i=0;i<sz;i+=2){
        if(lcm(divisor[i],divisor[i+1]) == n){
            int temp = min(ans,max(divisor[i],divisor[i+1]));
            if(temp<ans){
                ans = temp;
                mainAns = {divisor[i],divisor[i+1]};
            }
        }
    }
    cout<<mainAns.first<<" "<<mainAns.second<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1; //cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
