class Solution {
public:
    int sumBase(int n, int k) {
     vector<int>ans;
     while(n>0){
       ans.push_back(n%k);
       n=n/k;
     }   
     int s=0;
     for(int i=0;i<ans.size();i++){
       s+=ans[i];
     }
     return s;
    }
};
