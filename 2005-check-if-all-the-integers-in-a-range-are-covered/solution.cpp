class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int i=left;i<=right;i++){
            bool val=false;
            for(int j=0;j<ranges.size();j++){
                if(i>=ranges[j][0] && i<=ranges[j][1]){
                    val=true;
                    break;
                }
            }
             if(val==false) return false;
        }
        return true;
    }
};
