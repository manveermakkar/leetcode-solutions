class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<double>averages;
        int x=0,y=nums.size()-1;
        for(int i=0;i<nums.size()/2;i++){
            double z=((double)nums[x]+(double)nums[y])/2.00;
            averages.push_back(z);
            x++;
            y--;
        }
        sort(averages.begin(),averages.end());
        return averages[0];
    }
};
