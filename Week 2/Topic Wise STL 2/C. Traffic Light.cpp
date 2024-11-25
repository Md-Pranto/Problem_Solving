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
    int n; char c; cin>>n>>c;
    int cntC=0;
    string s="";
    vector<int> CharPos;
    vector<int> greenLight;
    for(int i=1;i<=n;i++){
        char ch;cin>>ch;
        s+=ch;
        if(ch==c){
            cntC++;
            CharPos.push_back(i);
        }
        if(ch=='g'){
            greenLight.push_back(i);
            greenLight.push_back(i+n);
        }
    }
//    for(auto it: CharPos){
//        cout<<it<<" ";
//    }
//    cout<<endl;
//    for(auto it: greenLight){
//        cout<<it<<" ";
//    }
//    cout<<endl;
    int maxi = -1;
    sort(greenLight.begin(),greenLight.end());
    for(int i=0;i<cntC;i++){
        int low = *lower_bound(greenLight.begin(),greenLight.end(),CharPos[i]);
        maxi = max(low-CharPos[i],maxi);
        //cout<<"low ->  "<<low<<" pos-> "<<CharPos[i]<<" maxi-> "<<maxi<<endl;
    }
    cout<<maxi<<endl;
    
    
}
int main(void){
    optimize();
    int tc=1; cin>>tc;
    while(tc--) solve();
    
    cout<<endl;
    
    return 0;
}
//1
//5 r
//rggry
//
