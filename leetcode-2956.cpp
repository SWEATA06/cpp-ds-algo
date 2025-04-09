class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int> mp;
        unordered_map<int,int> mp1;
        unordered_map<int, bool> seen1, seen2;
        vector<int> arr;
        for(int i=0;i<n;i++){
            mp[nums1[i]]++;
        }
        for(int i=0;i<m;i++){
            mp1[nums2[i]]++;
        }
        int count=0;
        for(int i=0;i<m;i++){
            if(mp.find(nums2[i])!=mp.end() && seen1.find(nums2[i]) == seen1.end()){//i thought of using flag but was not working so,had to use another map
                count+=mp[nums2[i]];
                seen1[nums2[i]] = true;
            }
        }
        arr.push_back(count);
        int count1=0;
        for(int i=0;i<n;i++){
            if(mp1.find(nums1[i])!=mp.end() && seen2.find(nums1[i]) == seen2.end()){
                count1+=mp1[nums1[i]];
                seen2[nums1[i]] = true;
            }
        }
        arr.push_back(count1);
        return arr;
    }
};
