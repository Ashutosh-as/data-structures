class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.length()!=B.length()) return false;
        return ((A+A).find(B)!=string::npos);
        
    }
};