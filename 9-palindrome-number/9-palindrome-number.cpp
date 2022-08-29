class Solution {
public:
    bool isPalindrome(int x) {
        string num=to_string(x);
        int flag=1;
        for(int i=0;i<num.length();i++){
            if(num[i]!=num[(num.length()-1)-i]){
                flag=0;
            }
        }
        return flag;
    }
};