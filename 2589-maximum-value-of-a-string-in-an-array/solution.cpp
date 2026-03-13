class Solution {
public:
     int checkvalue(string s){
        int n = 0;
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])==false) return s.size();
            n = n * 10 + (s[i] - '0');
        }

        return n;
    }
    int maximumValue(vector<string>& strs) {
        vector<int>ans;
        for(int i=0;i<strs.size();i++){
           ans.push_back(checkvalue(strs[i]));
        }
        int y= *max_element(ans.begin(),ans.end());
        return y;
    }
};

