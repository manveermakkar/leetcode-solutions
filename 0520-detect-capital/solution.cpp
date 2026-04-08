class Solution {
public:
    bool detectCapitalUse(string word) {
        string word1=word;
        for(int i=0;i<word1.size();i++){
            word1[i]=tolower(word1[i]);
        }
        if(word1==word) return true;

        int count=0;
        for(int i=0;i<word.size();i++){
          if(word[i]>='A' && word[i]<='Z')count++;
        }
        if(count==word.size()) return true;
         bool final=false;
        for(int i=0;i<word.size();i++){
            if(i==0 && word[i]>='A' && word[i]<='Z') final=true;
            if(i!=0 && word[i]>='A' && word[i]<='Z') final=false;
        }
        return final;
    }
};
