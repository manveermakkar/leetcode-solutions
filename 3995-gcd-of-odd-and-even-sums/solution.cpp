class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=0;
        int sumeven=0;
         for(int i=1;i<=n;i++){
            sumodd+=2*i-1;
         }
         for(int i=1;i<=n;i++){
            sumeven+=2*i;
         }
        //gcd func
        while(sumodd!=sumeven){
            if(sumodd>sumeven){
                sumodd=sumodd-sumeven;
            }
            else{
                sumeven=sumeven-sumodd;
            }
        }
        return sumodd;
    }

};
