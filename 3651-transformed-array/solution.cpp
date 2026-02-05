class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();

        for(int i = 0; i < n; i++) {

            if(nums[i] > 0) {
                int x = (i + nums[i]) % n;
                result.push_back(nums[x]);
            }

            if(nums[i] == 0) {
                result.push_back(nums[i]);
            }

            if(nums[i] < 0) {
                int y = (i + nums[i]) % n;
                if(y < 0) {
                    y = y + n;   
                }
                result.push_back(nums[y]);
            }
        }
        return result;
    }
};

