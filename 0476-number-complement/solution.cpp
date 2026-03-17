class Solution {
public:
    int findComplement(int num) {
        if(num==0) return 1;
        vector<int>ans;
        while(num>0){
            ans.push_back(num%2);
              num=num/2;
        }
        long long  n=1;
        long long  s=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0) ans[i]=1;
            else ans[i]=0;
        }   
                     
        for(int i=0;i<ans.size();i++){
           s+=ans[i]*n;
           n=n*2;
        }
        return (int)s;
    }
};
