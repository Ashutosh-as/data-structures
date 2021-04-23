class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> v;
        priority_queue<pair<int,int>> p;
        for(int i=0;i<arr.size();i++)
        {
            int aads=abs(arr[i]-x); 
            p.push({aads,arr[i]});
            if(p.size()>k){
                p.pop();
            }
        }
        while(p.size()>0){
            v.push_back(p.top().second);
            p.pop();
          
        }
         sort(v.begin(),v.end());
        return v;
    }
};