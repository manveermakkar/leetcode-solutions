class Solution {
public:
    int ones(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        int c=0;
        while(n>0){
            if(n%2==1) c++;
            n=n/2;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.push_back(ones(i));
        }
        return ans;
    }
};
