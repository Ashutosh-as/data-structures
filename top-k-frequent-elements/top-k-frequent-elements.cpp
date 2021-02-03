class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector <int>v;
        unordered_map <int,int>mp;
            for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
                
            }
          priority_queue<pair<int, int>, vector<pair<int, int>>,greater<pair<int,int>>>q;
        for(auto i=mp.begin();i!=mp.end();i++){
            q.push(make_pair(i->second,i->first));
            if(q.size()>k)
                q.pop();
        }
       while(!q.empty()){
           v.push_back(q.top().second);
           q.pop();
           
       }
        return v;
            
        }
        
    
};