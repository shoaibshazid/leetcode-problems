class NumArray {
private:
    vector<int>ans;
public:
    NumArray(vector<int>& nums) {
          ans.push_back(nums[0]);
          for(int i=1;i<nums.size();i++){
              ans.push_back(nums[i]+ans[i-1]);
          }
        
    }
    
    int sumRange(int left, int right) {
        if(left==0) return ans[right];
        return ans[right]-ans[left-1];
    }
};
