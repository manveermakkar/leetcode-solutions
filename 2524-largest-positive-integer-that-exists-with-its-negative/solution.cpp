class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i != j && nums[i] == -nums[j]) {
                    ans.push_back(abs(nums[i]));
                    break;
                }
            }
        }

        if(ans.empty()) return -1;

        sort(ans.begin(), ans.end());
        return ans.back();
    }
};
