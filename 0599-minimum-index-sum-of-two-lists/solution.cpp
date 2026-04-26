class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
     vector<string>str;
     vector<int>sum;
     for(int i=0;i<list1.size();i++){
        for(int j=0;j<list2.size();j++){
            if(list1[i]==list2[j]){
                str.push_back(list1[i]);
                sum.push_back(i+j);
                break;
            }
      
        }
     }
    int minim=INT_MAX;
    for(int i=0;i<sum.size();i++){
        if(minim>sum[i]) minim=sum[i];
    }
    vector<string>ans;
    for(int i=0;i<str.size();i++){
        if(sum[i]==minim) ans.push_back(str[i]);
    }
    return ans;
    }
};
