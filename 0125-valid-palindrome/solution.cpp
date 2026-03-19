class Solution {
public:
    bool palindrome(string x){
        for(int i=0,j=x.size()-1;i<j;i++,j--){
          if(x[i]!=x[j]) return false;
        }    
        return true;
        }
    bool isPalindrome(string s) {
        string ans="";
        for(char x:s){
            if(isalnum(x) && x!=' '){
                ans+=x;
            }
        }
        for(int i=0;i<ans.size();i++){
            ans[i]=tolower(ans[i]);
        }
        if(palindrome(ans)==true) return true;
        else return false;
    }
};
