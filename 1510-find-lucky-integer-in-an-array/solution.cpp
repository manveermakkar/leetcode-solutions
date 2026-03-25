class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int luckyint=-1;
        for(auto p:m){
            if(p.first==p.second) luckyint=p.first; 
                    }
                    return luckyint;
    }
};
