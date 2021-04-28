class Solution {
public:
    // we can solve using 
    bool isPalindrome(string s) {
        int l=0;
        int h= s.size()-1;
        if(s.length()<=1) return true;
        while(l<h){
        while(l<h && !isalnum(s[l])  )l++;
            while(l<h &&!isalnum(s[h]))h--;
        if(l<h&& tolower(s[l])!=tolower(s[h])) return false;
            l++;
        h--;
        }
        return true;
             
    }
};