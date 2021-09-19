class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=nums[0];
        int curr_sum=0;
        for(auto i:nums){
            curr_sum+=i;
        if(curr_sum>max_sum)
            max_sum=curr_sum;
        if(curr_sum<0)
            curr_sum=0;
        
        }
           return max_sum;
 
    }
};