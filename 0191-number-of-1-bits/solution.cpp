class Solution {
public:
    int hammingWeight(int n) {
        vector<int>x;
        while(n>0){
            x.push_back(n%2);
            n=n/2;
             }
             int count=0;
             for(int y:x){
                if(y==1) count++;
             }
             return count;
    }
};
