class Solution {
public:
    bool isPerfectSquare(int num) {
        long int high=num;
         long int low=1;
         long int mid;
         long int sq;
        while(low<=high){
            mid=low+(high-low)/2;
            sq=mid*mid;
            if(num==sq)
                return true;
            else if(sq>num)
                high=mid-1;
            else
                low=mid+1;
                 
        }
    return false;
        
    }
  
    
};