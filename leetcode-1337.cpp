class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        int count;
        vector<pair<int, int>> mp;
        vector<int> v;
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1) count++;
            }
            mp.push_back({count, i});
        }
        sort(mp.begin(), mp.end()); 
        for(int i=0;i<k;i++){
            v.push_back(mp[i].second);
        }
        return v;
    }
};
