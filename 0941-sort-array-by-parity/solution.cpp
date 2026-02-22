class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        vector<int> ans(nums.size());
        int s=0;
        for(int i=0;i<even.size();i++){
            ans[s++]=even[i];

        }
        for(int i=0;i<odd.size();i++){
            ans[s++]=odd[i];

        }
        return ans;
    }
};
