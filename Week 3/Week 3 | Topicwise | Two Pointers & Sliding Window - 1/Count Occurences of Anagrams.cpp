//User function template for C++
class Solution{
public:
    int search(string sub, string s) {
    map<char,int> mp;
    int arr[26]={0};
    int n = s.length();
    int len = sub.length();
    //if(len>n) return 0;
    
    for(int i=0;i<len;i++){
        arr[s[i]-'a']++;
        mp[sub[i]]++;
    }
    int freq =mp.size();
    int cnt=0;
    int ans=0;
    
    for(int i=0;i<26;i++){
        char c = 'a'+i;
        if(mp.find(c)!=mp.end() && mp[c]==arr[i]) cnt++;
    }
    if(cnt==freq) ans++;
    
    int l=0,r=len;
    while(r<n){
        cnt=0;
        
        int indx = s[r]-'a';
        arr[indx]++;
        arr[s[l]-'a']--;
        r++; l++;
        for(int i=0;i<26;i++){
            char c = 'a'+i;
            if(mp.find(c)!=mp.end() && mp[c]==arr[i]) cnt++;
        }
        if(cnt==freq) ans++;
    }
        return ans;
        
    }

};
