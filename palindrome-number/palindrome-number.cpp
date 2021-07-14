class Solution {
public:
    bool isPalindrome(int x) {
        long long int i=0, n = x, sum=0, d;
        if(x < 0)
            return false;
        else if(x==0)
            return true;
        else
        {
            int len = log10(x) + 1;
            i = len;
        }
        i--;
        while(x!=0)
        {
            d = x%10; // 123 : 3 : 0 + 3*10
            if(d==0 && i==0)
                return false;
            sum = sum + d*pow(10, i);
            x = x/10;
            i--;
        }
        // cout << n << " " << sum << endl;
        if(n==sum)
            return true;
        return false;
    }
};