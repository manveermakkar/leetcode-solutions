class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                   count++;
                if(i==nums.size()-1) ans.push_back(count);
            } 
            if(nums[i]==0) {
                 ans.push_back(count);
                count=0;
            }


        }
        return *max_element(ans.begin(), ans.end());
    }
};
