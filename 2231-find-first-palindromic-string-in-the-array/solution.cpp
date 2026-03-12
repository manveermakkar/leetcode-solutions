class Solution {
public:
    bool checkpalindrome(string s){
        int n=s.size();
        for(int i=0,j=s.size()-1;i<=j;i++,j--){
            if(s[i]!=s[j]) return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string s:words){
            if(checkpalindrome(s)==true) return s;
        }
        return "";
    }
};
