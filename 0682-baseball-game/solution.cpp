class Solution {
public:
    int calPoints(vector<string>& operations) {
        int score=0;
        vector<int> record;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="D"){
                record.push_back(record[record.size()-1]*2);
            }
            else if(operations[i]=="C"){
                record.pop_back();
            }
            else if(operations[i]=="+"){
                record.push_back(record[record.size()-1]+record[record.size()-2]);
            }
            else{
                int x=stoi(operations[i]);
                record.push_back(x);
            }
        }
        for(int i=0;i<record.size();i++){
            score+=record[i];
        }
        return score;
    }

};
