class Solution {
public:
    int getSum(int a, int b) {
      int unsigned x=a^b;
        int unsigned carry =a&b;
        if (carry==0)
            return x;
        else
            
            return getSum(x,carry<<1);
        
        
        
    }
};