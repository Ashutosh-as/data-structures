class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> res;
        int i=0,j=n;
		
        while(i<n and j<2*n){
		//Here we are just pushing alternatively first from the front and second from the back.
            res.push_back(nums[i++]);
            res.push_back(nums[j++]);
        }
    return res;    
    }
};