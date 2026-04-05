class Solution {
public:
    bool judgeCircle(string moves) {
        int lc=0,rc=0,uc=0,dc=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U')uc++;
            else if(moves[i]=='D') dc++;
            else if(moves[i]=='L') lc++;
            else if(moves[i]=='R') rc++;
        }
        if((lc==rc) && (uc==dc)) return true;
        else return false;
    }
};
