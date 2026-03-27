class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int threshold=nums.size()/2;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]) count++;
            else count=1;

            if(count==threshold) return nums[i];
        }
        return 0;
    }
};
