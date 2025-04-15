class Solution {
public:
    bool isFascinating(int n) {
        int m=2*n;
        int k=3*n;
        vector<int> arr;
        while(n>0){
           arr.push_back(n%10);
           n=n/10;
        }
        while(m>0){
            arr.push_back(m%10);
            m=m/10;
        }
        while(k>0){
            arr.push_back(k%10);
            k=k/10;
        }
        sort(arr.begin(),arr.end());
        int flag=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) return false;
            if(arr[i]!=i+1) flag=0;
        }
        if(flag==0) return false;
        return true;
    }
};
