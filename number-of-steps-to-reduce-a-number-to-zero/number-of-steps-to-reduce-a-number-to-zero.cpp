class Solution {
public:
    const int inf=(int)1e9;
    int numberOfSteps(int num) {
        if(num==0) return 0;
        int q1=inf;
        int q2=inf;
        if(num%2==0) return q1=1+numberOfSteps(num/2);
        q2=1+numberOfSteps(num-1);
        return min(q1,q2);
        
        
    }
};