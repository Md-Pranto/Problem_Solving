

class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        vector<int> ans;
        int sz = arr.size();
        int l=0,r=0;
        queue<int> q;
        while(r<sz){
            if(arr[r]<0) q.push(arr[r]);
            
            if(r-l+1==k){
                if(!q.empty()) ans.push_back(q.front());
                else ans.push_back(0);
                
               if(!q.empty() && arr[l]==q.front()) q.pop();
               l++; r++;
            }
            else r++;
            
            
            
        }
        return ans;
    }
};
