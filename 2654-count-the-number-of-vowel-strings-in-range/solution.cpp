class Solution {
    bool checkvowel(string s){
        int m = s.size();
        bool x = false;
        bool y = false;

        if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u'){
            x = true;
        }
        else x = false;

        if(s[m-1]=='a' || s[m-1]=='e' || s[m-1]=='i' || s[m-1]=='o' || s[m-1]=='u'){
            y = true;
        }
        else y = false;

        return x && y;
    }

public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;

        for(int i = left; i <= right; i++){
            if(checkvowel(words[i]) == true){
                count++;
            }
        }

        return count;
    }
};

