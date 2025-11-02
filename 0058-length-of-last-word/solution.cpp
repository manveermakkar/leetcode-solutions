class Solution {
public:
    int lengthOfLastWord(string s) {
      int space=0;
      int i=s.size()-1;
      //trailing space
      while( i>=0 && s[i]==' '){
        i--;
      }
      int len=0;
      while(i>=0 && s[i]!=' '){
        len++;
        i--;
      }
      return len;
    }
};
