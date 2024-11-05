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
void solve(){
    int maxi = 0;
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    ll sum;
    for(int i=0;i<n;i++){
        sum =0;
        for(int j=i;j<n;j++){
            sum+= arr[j];
            if(sum%2==0) maxi = max(j-i+1,maxi);
        }
        
    }
    cout<<maxi<<endl;
    
}

int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--)solve();

    return 0;
}
