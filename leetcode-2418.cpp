class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        unordered_map<int,string> mp;
        for(int i=0;i<n;i++){
            mp[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end());
        int j=n-1;
        for(int i=0;i<n;i++){
               names[i]=mp[heights[j]];// this line should be kept in mind 
               j--;
            }
        return  names;
    }
};
