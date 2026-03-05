class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squared;
        for(int i=0;i<nums.size();i++){
            squared.push_back(pow(nums[i],2));
        }
        sort(squared.begin(),squared.end());
        return squared;
    }
};
