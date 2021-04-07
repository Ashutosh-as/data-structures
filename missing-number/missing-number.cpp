class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int totalsum= (n)*(n+1)/2;
        int sum=0;
        int x;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            x=totalsum-sum;
        }
        return x;
    }
};