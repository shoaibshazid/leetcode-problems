class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
        int n=nums.size();
        int sum=0,count=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k) count++;
            if(mpp.find(sum-k)!=mpp.end()) count+=mpp[sum-k];
            mpp[sum]++;
        }
        return count;
    }
};