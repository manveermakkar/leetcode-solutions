class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m1;
        map<int,int>m2;
        for(int i=0;i<arr.size();i++){
            m1[arr[i]]++;
        }
        for(auto x:m1){
            m2[x.second]++;
        }
        for(auto y:m2){
            if(y.second>1) return false;
        }
        return true;
    }
};
