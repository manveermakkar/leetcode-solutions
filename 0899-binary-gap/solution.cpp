class Solution {
public:
    int binaryGap(int n) {
        vector<int>bin;
        while(n>0){
            bin.push_back(n%2);
            n=n/2;
        }
        reverse(bin.begin(),bin.end());
        vector<int>ans;
        for(int i=0;i<bin.size();i++){
            if(bin[i]==0) continue;
            for(int j=i+1;j<bin.size();j++){
                if(bin[j]==1){
                    ans.push_back(j-i);
                    break;
                }
            }
        }
        if(ans.size()==0) return 0;
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
    }
};
