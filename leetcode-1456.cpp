//bruteforce but will give tle tat 103 no testcase
class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0;
        int n=s.size();
        int maxi=INT_MIN;
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
//better
class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
       unordered_set<char> vowels={'a','e','i','o','u'};
       int count=0;
       int maxi=0;
       for(int i=0;i<n;i++){
        if(vowels.count(s[i])) count++;
        if(i>=k && vowels.count(s[i-k])) count--;
        maxi=max(maxi,count);
       } return maxi;
    }
};
