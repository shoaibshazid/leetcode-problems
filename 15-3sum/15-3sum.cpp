class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target=0;
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int target1=target-nums[i];
            int front=i+1;
            int back=n-1;
            while(front<back){
                if(nums[front]+nums[back]<target1) front++;
                else if(nums[front]+nums[back]>target1) back--;
                else{
                    vector<int>temp(3,0);
                    temp[0]=nums[i];
                    temp[1]=nums[front];
                    temp[2]=nums[back];
                    ans.push_back(temp);
                    while(front<back && nums[front]==temp[1]) front++;
                    while(front<back && nums[back]==temp[2]) back--;
                }
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};