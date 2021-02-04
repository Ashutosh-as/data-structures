class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans=0;
        unordered_map <int ,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(auto it:m)
        {
            auto itr=m.find(it.first+1);
            if(itr!=m.end())
                ans=max(ans,it.second+itr->second);
        }
        return ans;
        
    }
};