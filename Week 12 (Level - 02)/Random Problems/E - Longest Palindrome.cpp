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
#define f0(i,n) for (ll i=0;i<n;i++)
#define f1(i,n) for (ll i=1;i<=n;i++)
#define vi vector<int>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
//Optimize is not allowed when I have to take input from input.txt file


int32_t main(void){
    optimize();
    vi prime;
    for(int i=2;i<=3000;i++){
        bool flag = false;
        for(int j=2;j*j<=i;j++){
            if(i%j==0) {flag = true; break;}
        }
        if(!flag) prime.push_back(i);
    }
    vi v(3007,0);
    
    for(int i=0;i<prime.size();i++){
        for(int j=prime[i]*2;j<=3000;j+=prime[i]){
            v[j]++;
        }
    }
    
    vi arr(3007,0);
    for(int i=0;i<=3000;i++){
        if(v[i]==2) arr[i] = 1;
    }
    
    for(int i=1;i<=3000;i++){
        arr[i] = arr[i-1]+arr[i];
    }
    int n; cin>>n;
    cout<<arr[n]<<endl;
    
    
    return 0;
}
