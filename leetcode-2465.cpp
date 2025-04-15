class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_set<double> mp;
        int j=n-1;
        for(int i=0;i<j;i++){
            double sum=0;
            sum=(nums[i]+nums[j])/2.0;
            mp.insert(sum);
            j--;
        }
        return mp.size();
    }
};
