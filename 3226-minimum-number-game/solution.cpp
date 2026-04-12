class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
       vector<int>ans;
       while(!nums.empty()){
        int x=nums[nums.size()-1];
        int y=nums[nums.size()-2];
        nums.pop_back();
        nums.pop_back();
        ans.push_back(y);
        ans.push_back(x);
       } 
       return ans;
    }
};
