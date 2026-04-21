class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int s=0;
        for(auto p:m){
            if(p.second==1) s+=p.first;
        }
        return s;
    }
};
