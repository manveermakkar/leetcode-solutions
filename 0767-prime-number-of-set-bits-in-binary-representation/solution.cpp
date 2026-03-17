class Solution {
public:
    vector<int> numbertobinary(int n){
        vector<int>ans;
        while(n>0){
            ans.push_back(n%2);
            n=n/2;
        }
        return ans;
    }
    bool checkprime(int n){
        if(n==1) return false;
        for(int i=2;i<n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        vector<int>b;
        for(int i=left;i<=right;i++){
            vector<int>v=numbertobinary(i);
            int c=0;
            for(int j=0;j<v.size();j++){
                if(v[j]==1)c++;
            }
            b.push_back(c);
        }
        int output=0;
        for(int i=0;i<b.size();i++){
             if(checkprime(b[i])==true) output++;
        }
        return output;    
        } 
};
