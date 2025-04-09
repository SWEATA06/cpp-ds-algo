class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int> mp;
        unordered_map<int,bool> seen1,seen2;
        vector<int> arr;
        for(int i=0;i<n;i++){
            mp[nums1[i]]++;
        }
        for(int i=0;i<m;i++){
        if(mp.find(nums2[i])!=mp.end() && seen1.find(nums2[i])==seen1.end())
           arr.push_back(nums2[i]);
           seen1[nums2[i]]=true;//forgot to push the true in seen
        }
        return arr;
    }
};
