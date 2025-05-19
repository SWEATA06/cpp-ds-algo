class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i+1<n && j+1<m){
                    if(matrix[i][j]!=matrix[i+1][j+1]) flag=1;
                }
            }
        }
        if(flag==1) return false;
        return true;
    }
};
