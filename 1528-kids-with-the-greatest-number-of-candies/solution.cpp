class Solution {
public:
   int maxcandy(vector<int> arr){
    int m=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(m<arr[i])m=arr[i];
    }
    return m;
   }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        for(int i=0;i<candies.size();i++){
            candies[i]+=extraCandies;
            if(candies[i]==maxcandy(candies)){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
            candies[i]-=extraCandies;
        }
        return ans;
    }
};
