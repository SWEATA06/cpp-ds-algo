//brute force 
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
              if(nums[i]==-nums[j] && nums[i]>0) maxi=max(maxi,nums[i]);  
            }
        }
        if(maxi==INT_MIN) return -1;
        return maxi;
    }
};
//better
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp.find(-nums[i])!=mp.end() && nums[i]>0) maxi=max(maxi,nums[i]);
        }
        if(maxi==INT_MIN) return -1;
        return maxi;
    }
};
//
