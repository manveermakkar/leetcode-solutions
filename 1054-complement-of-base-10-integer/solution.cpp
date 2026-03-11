class Solution {
public:
    int bitwiseComplement(int n) {
        vector<int>ans;
        if(n==0) return 1;
        while(n>0){
            ans.push_back(n%2);
            n=n/2;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0) ans[i]=1;
            else ans[i]=0;
        }
        int an=0;
        int t=1;
        for(int i=ans.size()-1;i>=0;i--){
           an+=ans[i]*t;
           t=t*2;
        }
        return an;
    }
};
