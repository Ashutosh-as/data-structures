class Solution {
public:
    string defangIPaddr(string address) {
        string b;
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                b+='[';
                b+='.';
                b+=']';
                
            }
            else 
            b+=address[i];
        }
        return b;
        
    }
};