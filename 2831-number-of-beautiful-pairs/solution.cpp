class Solution {
public:
    int gcd(int a,int b){
        if(a==0) return b;
        if(b==0) return a;
        while(a!=b){
            if(a>b){
          a=a-b;
            }
            else{
                b=b-a;
            }
        }
        return a;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int pair=0;
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            while(first>=10){
                first=first/10;
            }
            for(int j=i+1;j<nums.size();j++){
                int last=nums[j]%10;
                if(gcd(first,last)==1) pair++;
            }
            
        }
        return pair;
    }
};
