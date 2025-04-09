//bruteforce <br>
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff) count++;
                }
            }
        }return count;
    }
};
<br>
  //optimized,took bit help from discussion
  class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
     int n=nums.size();
     int count=0;
     unordered_map<int,int> mp;
     for(int i=0;i<n;i++){
        mp[nums[i]]=i;
     }
     for(int i=0;i<n;i++){
         if((mp.find(nums[i]-diff)!=mp.end()) && (mp.find(nums[i]+diff)!=mp.end())) count++;
     } 
     return count;  
    }
};
