class Solution {
public:
    int firstbinarysearch(vector<int>&n,int k){
        int start=0;
        int end=n.size()-1;
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(n[mid]==k){
                res=mid;
                end=mid-1;
            } 
            else if(k<n[mid])
            {
                end=mid-1;
                
            }
            else{
                start=mid+1;
                
            }
        }
        return res;
        
    }
    int lastbinarysearch(vector<int>&n,int k){
        int start=0;
        int end=n.size()-1;
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(n[mid]==k){
                res=mid;
                start=mid+1;
            }
            else if(k<n[mid]){
                end=mid-1;
                
            }
            else{
                start=mid+1;
                
            }
        }
        return res;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        int l=firstbinarysearch(nums,target);
        int h=lastbinarysearch(nums,target);
        v.push_back(l);
        v.push_back(h);
        return v;
        
        
        
    }
};