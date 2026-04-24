class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int countl=0;
        int countr=0;
        int countb=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') countl++;
            if(moves[i]=='R') countr++;
            if(moves[i]=='_') countb++;
        }
        int dis=countr-countl;
        dis=max(abs(dis+countb),abs(dis-countb));
        return dis;
    }
};
