//bruteforce but will give tle tat 103 no testcase
class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0;
        int n=s.size();
        int maxi=INT_MIN;
        vector<char> l;
        while(j<n){
            if(j-i+1<k) j++;
            else if (j-i+1){
                int count=0;
                for(int b=i;b<=j;b++){
                    if(l[b]=='a'||l[b]=='e'||l[b]=='i'||l[b]=='o'||l[b]=='u')
                    count++;
                }
                maxi=max(maxi,count);
                j++;
                i++;
            }
        }return maxi;
    }
};
