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
#define pb push_back
#define endl '\n'

#define f0(i,n) for (ll i=0;i<n;i++)
#define f1(i,n) for (ll i=1;i<=n;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file

int main(void){
    optimize();
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        string s; cin>>s;
        int arr[26]={0};
        for(int i=0;i<n;i++){
            int indx = s[i]-'a';
            arr[indx]++;
        }
        string ans="";
        int cnt =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
                if(arr[j]>0){
                    arr[j]--;
                    char c= 'a'+j;
                    ans.push_back(c);
                    cnt++;
                }
            }
            if(cnt==n) break;
        }
        cout<<ans<<endl;
        
        
        
    }
    
    
    return 0;
}
