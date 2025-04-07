class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[candyType[i]]++;
        }
        if(mp.size()>n/2) return n/2;
        if(mp.size()<=n/2) return mp.size();
        return 0;
    }
};
