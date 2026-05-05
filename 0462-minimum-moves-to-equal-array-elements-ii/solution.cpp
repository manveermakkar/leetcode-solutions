class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=nums.size()/2;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<nums[m]) c+=nums[m]-nums[i];
            else if(nums[i]>nums[m]) c+=nums[i]-nums[m];
            else continue;
        }
        return c;
    }
};
