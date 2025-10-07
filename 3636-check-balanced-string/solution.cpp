class Solution {
public:
    bool isBalanced(string num) {
        int sumodd=0,sumeven=0;
        for(char i=0;i<num.length();i+=2){
            int dig=num[i]-'0';
            sumeven=sumeven+dig;
        }
        for(char i=1;i<num.length();i+=2){
            int dig=num[i]-'0';
            sumodd=sumodd+dig;
        }
        if(sumeven==sumodd){
            return true;
        }
        return false;
    }
};
