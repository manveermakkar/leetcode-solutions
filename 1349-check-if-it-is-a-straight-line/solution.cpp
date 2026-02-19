class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if(n <= 1) return false;
        for(int i = 2; i < n; i++) {
            long long x1 = coordinates[i-2][0];
            long long y1 = coordinates[i-2][1];
            long long x2 = coordinates[i-1][0];
            long long y2 = coordinates[i-1][1];
            long long x3 = coordinates[i][0];
            long long y3 = coordinates[i][1];
            
            if((y3 - y2) * (x2 - x1) != 
               (y2 - y1) * (x3 - x2)) {
                return false;
            }
        }
        
        return true;

    }
};
