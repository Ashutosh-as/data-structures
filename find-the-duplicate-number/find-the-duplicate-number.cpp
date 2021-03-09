class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // bin search
        
        int lo = 0;
        int hi = nums.size()-1;
        int dup =INT_MAX;
        while(lo<=hi)
            
        {
            int mid = lo + (hi-lo)/2;

            // case 1a:check left neighbor 
            if(nums[mid]< mid + 1 && nums[mid-1] ==mid)
            {
                //found 
                dup = nums[mid];
                break;
            }
            // case 1b:check left neighbor 
            if(nums[mid] < mid + 1 && nums[mid -1] != mid)
            {
                // left
                hi = mid -1;
                
            }
            else
            {
                // right
                lo = mid +1;
            }
        }
        return dup;
    }
};