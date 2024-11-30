class Solution {
public:
    typedef long long ll;
    int longestKSubstr(string &s, int k) {
        int n = s.length();
        int ans = 0;
        int l=0,r=0;
        map<char,int> cnt;
        while(r<n){
            char c = s[r];
            cnt[c]++;
            if(cnt.size()==k){
                ans = max(ans,r-l+1);
            }
            if(cnt.size()>k){
                while(l<=r && cnt.size()>k){
                    c = s[l];
                    cnt[c]--;
                    if(cnt[c]==0){
                        cnt.erase(c);
                    }
                    l++;
                    
                }
                if(cnt.size()==k){
                    ans = max(ans,r-l+1);
                }
            }
            r++;
            
            
        }
        if(ans) return ans;
        else return -1;
    }
};
