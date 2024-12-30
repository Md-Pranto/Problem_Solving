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
    int n; string s; cin>>n>>s;
    vector<char> arr;
    for(int i=0;i<26;i++) arr.push_back((char)i+'a');
    int ans = INT_MAX;
    for(int i=0;i<26;i++){
        int l=0,r=n-1;
        char curr = arr[i];
        int remove = 0;
        bool valid = true;
        while(l<r){
            if(s[l]==s[r]){
                l++; r--;
            }
            else if(s[l]==curr){
                l++; remove++;
            }
            else if(s[r]==curr){
                r--; remove++;
            }
            else{
                valid = false;
                break;
            }
            
        }
        if(valid) {
            ans = min(ans,remove);
        }
    }
    if(ans==INT_MAX) cout<<-1;
    else cout<<ans;
    cout<<endl;
}
int32_t main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}

