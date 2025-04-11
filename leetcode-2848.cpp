//using map
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
       int n=nums.size();
       unordered_map<int,int> mp;
       for(int i=0;i<n;i++){
        int start=nums[i][0];
        int end=nums[i][1];
        for(int j=start;j<=end;j++){
            mp[j]++;
        }
       } return mp.size();
    }
};
