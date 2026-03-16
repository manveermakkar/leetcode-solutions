class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        if(flowerbed.size()==1){
            if(flowerbed[0]==0) n--;
        }

        if(flowerbed.size()>=2){
            if(flowerbed[0]==0 && flowerbed[1]==0){
                flowerbed[0]=1;
                n--;
            }
        }

        int x = flowerbed.size();

        if(x>=2 && flowerbed[x-1]==0 && flowerbed[x-2]==0){
            flowerbed[x-1]=1;
            n--;
        }

        for(int i=1;i<x-1;i++){
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }
        }

        if(n<=0) return true;
        return false;
    }
};
