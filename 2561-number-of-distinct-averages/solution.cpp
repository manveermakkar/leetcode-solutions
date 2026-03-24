class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        vector<double>ans;
        while(nums.size()>0){
            sort(nums.begin(),nums.end());
            double avg=double(nums[0]+nums[nums.size()-1])/2.00;
            ans.push_back(avg);
            nums.erase(nums.begin()+0);
            nums.erase(nums.begin()+nums.size()-1);
        }
        set<double>s(ans.begin(),ans.end());
        return s.size();
    }
};
