class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,n=s.size(),ans=INT_MIN;
        unordered_map<char,int>mpp;
        if(s.size()==0) return 0;
        while(j<n){
            mpp[s[j]]++;
            int k=j-i+1;
            if(mpp.size()==k){
                ans=max(ans,j-i+1);
                j++;
            }else{
                while(mpp.size()<k){
                    mpp[s[i]]--;
                    if(mpp[s[i]]==0) mpp.erase(s[i]);
                    i++;
                    k--;
                } 
                j++;
            }
        }
        return ans;
    }
};