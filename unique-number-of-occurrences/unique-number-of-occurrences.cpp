class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_map<int,int>ump;
        for(auto it:arr)
            mp[it]++;
        for(auto it:mp)
            ump[it.second]++;
        for(auto it:ump){
            if(it.second>1) return false;
            
            
        }
        
        return true;
        
        
    }
};