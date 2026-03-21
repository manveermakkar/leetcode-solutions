class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    map<int,int>m;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
    }
    int x=nums.size()/3;
    vector<int>ans;
    for(auto p:m){
        if(p.second>x) ans.push_back(p.first);
    }
    return ans;
    }
};
