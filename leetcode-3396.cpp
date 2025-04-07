class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int> mp;
        for(int i=n-1;i>=0;i--){// we r using i from back beacuse we need sufix,unique at the end of array
            mp[nums[i]]++;
            if(mp[nums[i]]>1) break;
            count++;
        }
        int ele=n-count;//how many elements we have to remove
        if(ele%3!=0) return ele/3+1;
        return ele/3;
    }
};
