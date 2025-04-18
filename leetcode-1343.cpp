class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,j=0;
        int n=arr.size();
        int sum=0,count=0;
        int window=0;
        while(j<n){
            window=window+arr[j];
            if(j-i+1<k) j++;
            else if(j-i+1==k) {
                sum=window;
                int l=sum/k;
                if(l>=threshold) count++;
                window-=arr[i];
                i++;
                j++;
            }
        } return count;
    }
};
