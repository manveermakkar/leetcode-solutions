class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string s = "123456789";
        int lowLength = to_string(low).length();
        int highLength = to_string(high).length();
        for(int len = lowLength; len <= highLength; len++){
            for(int i = 0; i + len <= 9; i++){
                int num = stoi(s.substr(i, len));
                if(num >= low && num <= high){
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};
