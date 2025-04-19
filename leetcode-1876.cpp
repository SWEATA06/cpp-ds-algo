class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int i=0,j=0;
        unordered_map<char,int> mp;
        int count=0,flag=0;
        while(j<n){
           mp[s[j]]++;
           //if(mp[s[j]]>1) flag=1;
           if(j-i+1<3) j++;
           else if(j-i+1==3){
                if(mp.size()==3) count++;
                mp[s[i]]--;
                if(mp[s[i]] == 0) {
                    mp.erase(s[i]); // 💡 important fix
                }
                i++;
                j++;
                //flag=0;
           }
        }return count;
    }
};
