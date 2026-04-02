class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int>h1=heights;
        sort(h1.begin(),h1.end());
        reverse(h1.begin(),h1.end());
        vector<string>ans;
        for(int i=0;i<names.size();i++){
            for(int j=0;j<names.size();j++){
                if(h1[i]==heights[j]) ans.push_back(names[j]);
            }
        }
        return ans;
    }
};
