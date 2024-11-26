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

int main(void){
    optimize();
    int n,m; cin>>n>>m;
    map<int,int> mp;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++) cin>>b[i];
    int l=0,r=0; long long ans=0;
    while(l<n && r<m){
        int curr= a[l], cnt1=0,cnt2=0;
        while(l<n && curr==a[l]){
            cnt1++; l++;
        }
        while(r<m && curr>b[r]) r++;
        
        while(r<m && curr==b[r]){
            cnt2++; r++;
        }
        ans+= 1LL*cnt1*cnt2;
        
    }
    cout<<ans<<endl;
    
    
    return 0;
}


