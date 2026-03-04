class Solution {
public:
    bool checkrow0(vector<vector<int>>& mat,int rowindex,int columnindex){
        for(int i=0;i<mat[rowindex].size();i++){
            if(i==columnindex) continue;
            if (mat[rowindex][i]==1) return false;
        }
        return true;
    }

    bool checkcolumn0(vector<vector<int>>& mat,int columnindex,int rowindex){
        for(int i=0;i<mat.size();i++){
            if(i==rowindex) continue;
            if(mat[i][columnindex]==1){
                return false;
            }
        }
        return true;
    }

    int numSpecial(vector<vector<int>>& mat) {
        int count=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1 && checkrow0(mat,i,j) && checkcolumn0(mat,j,i)){
                    count++;
                }
            }    
        }
        return count;
    }
};
