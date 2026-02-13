class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char> ans;
        for(auto x:letters){
            if(x>target){
                ans.push_back(x);
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==0) return letters[0];
         return ans[0];
    }
};
