class Solution {
public:
       int findsquaresum(int num)
        {
            int sum=0;
            int digit;
            while(num>0){
                digit=num%10;
                sum+=digit*digit;
                num=num/10;
            }
            return sum;
        }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=findsquaresum(slow);
            fast=findsquaresum(findsquaresum(fast));
            
            
        }
        while(slow!=fast);
            return slow==1;
        
     
        
    }
};