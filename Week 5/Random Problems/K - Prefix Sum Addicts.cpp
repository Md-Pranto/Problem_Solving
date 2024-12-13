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
    int n,k; cin>>n>>k;
    vector<int> freq;
    int prev = -1;
    int first=0;
    for(int i=0;i<k;i++){
        int a; cin>>a;
        if(i==0) {
            prev = a;
            first = a;
        }
        else{
            freq.push_back(a-prev);
            prev = a;
        }
    }
    if(k==1 || n==1){
        cout<<"YES"<<endl; return;
    }
    if(!is_sorted(freq.begin(), freq.end())){
        cout<<"NO"<<endl; return;
    }
    
    int left = n-k+1;
    int low,high;
   
    high = (int)ceil((double)first/left*1.0);
    low = (int)floor((double)first/left*1.0);
    //cout<<left<<endl;
    //cout<<low<<" "<<high<<endl;
    if(freq[0]<high || freq[0]<low){
        cout<<"NO";
    }
    else cout<<"YES";
    
    cout<<endl;
}
int main(void){
    optimize();
    int tc = 1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
