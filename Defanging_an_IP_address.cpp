class Solution {
public:
    string defangIPaddr(string address) {
        string s = "";
        for(int i=0; i<address.size(); i++){
            if(address[i]!='.'){
                s = s + address[i];
            }
            else{
                s = s + '[' + address[i] + ']';
            }
        }
        return s;
    }
};
