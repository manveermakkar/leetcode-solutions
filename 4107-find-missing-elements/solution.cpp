class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=nums[0];i<nums[nums.size()-1];i++){
            bool condn=false;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i) {
                    condn=true;
                    break;
                }
            }
            if(condn==false) ans.push_back(i);
        }
        return ans;
    }
};

