class Solution {
    int frequency(string num,char i){
        int count=0;
        for(auto x:num){
            if(i==x) count++;
        }
        return count;
    }
public:
    bool digitCount(string num) {
        for(int i=0;i<num.size();i++){
            int n=num[i]-'0';
            char m=i+'0';
            if(n!=frequency(num,m)) return false;
        }
        return true;
    }
};
