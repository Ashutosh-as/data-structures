class Solution {
public:
bool isOneBitCharacter(vector <int>& bits) {
int n = bits.size();
for(int i=0;i<n-1;i++){
if(bits[i]==1){
if(i==n-2){
return false;
}
i++;
}
}
return true;
}
};