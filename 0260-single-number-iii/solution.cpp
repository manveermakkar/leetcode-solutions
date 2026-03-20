class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ams;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto p:m){
            if(p.second==1) ams.push_back(p.first);
        }
        return ams;
    }
};
