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

class ball{
public:
    ll indx;
    ll leftSum;
    ll rightSum;
    ball(ll indx,ll leftSum,ll rightSum){
        this->indx = indx;
        this->leftSum = leftSum;
        this->rightSum= rightSum;
    }
};


void solve(){
    vector<ball> v;
    ll n; cin>>n;
    vector<ll> left_sum(n);
    vector<ll> right_sum(n);
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            left_sum[i] = arr[i];
        }
        else {
            left_sum[i] = left_sum[i-1]+arr[i];
        }
    }
    for(ll i=n-1;i>=0;i--){
        if(i==n-1){
            right_sum[i] = arr[i];
        }
        else right_sum[i] = right_sum[i+1]+arr[i];
    }
//    for(int i=0;i<n;i++){
//        cout<<left_sum[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<n;i++){
//        cout<<right_sum[i]<<" ";
//    }
//    cout<<endl;
    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            v.push_back(ball(i,left_sum[i],right_sum[i]));
        }
    }
    ll cnt=0;
    for(auto ball: v){
        if(ball.leftSum==ball.rightSum){
            cnt+=2;
        }
        else if(abs(ball.leftSum-ball.rightSum)==1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
