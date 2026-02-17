class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int duplicate = -1;
        int missing = -1;
        
        // Check if first number is not 1
        if(nums[0] != 1)
            missing = 1;
        
        for(int i = 1; i < n; i++) {
            
            // Duplicate found
            if(nums[i] == nums[i-1]) {
                duplicate = nums[i];
            }
            
            // Missing found (gap detected)
            else if(nums[i] > nums[i-1] + 1) {
                missing = nums[i-1] + 1;
            }
        }
        
        // If missing not found inside loop
        if(missing == -1) {
            if(nums[n-1] != n)
                missing = n;
        }
        
        return {duplicate, missing};
    }
};

