class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int>m;
        for(int i=0;i<bulbs.size();i++){
            m[bulbs[i]]++;
        }
        vector<int>ans;
        for(auto p:m){
            if(p.second%2!=0) ans.push_back(p.first);
            else continue;
        }
        return ans;
    }
};
