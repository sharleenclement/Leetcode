class Solution {
public:
    string reformatNumber(string number) {
        string ans="";
        for(int i=0;i<number.size();i++)
        {
            if(number[i]!=' ' && number[i]!='-')
                ans+=number[i];
            else
                continue;
        }
        string result="";
        int n=ans.size();
        if(n==2 || n==3)
            return ans;
        else if(n==4)
        {
            result=ans.substr(0,2)+ '-' +ans.substr(2,4);
        }
        else if(n%3==0)
        {
            int k=0;
            while(k!=n)
            {
                if((n-k)!=3)
                result+=ans.substr(k,3)+ '-';
                else
                result+=ans.substr(k,3);
                k+=3;
            }
        }
        else if(n%3==1)
        {
            int k=0;
            while(k!=(n-4))
            {
                result+=ans.substr(k,3)+ '-';
                k+=3;
            }
            while(k!=n)
            {
                if((n-k)!=2)
                result+=ans.substr(k,2)+ '-';
                else
                result+=ans.substr(k,2);
                k+=2;
            }
        }
        else if(n%3==2)
        {
            int k=0;
            while(k!=(n-2))
            {
                result+=ans.substr(k,3)+ '-';
                k+=3;
            }
            while(k!=n)
            {
                if((n-k)!=2)
                result+=ans.substr(k,2)+ '-';
                else
                result+=ans.substr(k,2);
                k+=2;
            }
        }
        return result;
    }
};