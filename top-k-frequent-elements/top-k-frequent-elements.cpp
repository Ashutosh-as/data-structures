class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto p=mp.begin();p!=mp.end();p++){
            minh.push(make_pair(p->second,p->first));
            if(minh.size()>k){
                minh.pop();
            }
        }
        while(!minh.empty()){
            res.push_back(minh.top().second);
            minh.pop();
        }
        return res;
    }
};