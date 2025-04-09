class Solution {
public:
    int reversedigit(int num){
            int rev=0;
            while(num>0){
                rev=rev*10+num%10;
                num=num/10;
            } return rev;   
        }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        int k;
        for(int i=0;i<n;i++){
            k=reversedigit(nums[i]);
            nums.push_back(k);
        }
        unordered_map<int,int> mp;
        int m=nums.size();//new size
        for(int i=0;i<m;i++){
            mp[nums[i]]++;
        }
        return mp.size();
    }
};
