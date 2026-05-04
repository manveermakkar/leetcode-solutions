class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     map<int,int>m;
     for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
     }
     vector<int>v;
     for(auto p:m){
        if(p.second==2) v.push_back(p.first);
     }
     return v;
    }
};
