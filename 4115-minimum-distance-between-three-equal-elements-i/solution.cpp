class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                if(nums[i]==nums[j] && nums[i]==nums[k]) ans.push_back(abs(i-j)+abs(k-j)+abs(k-i));
                }
            }
       
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==0) return -1;
        else return ans[0];
    }
};
