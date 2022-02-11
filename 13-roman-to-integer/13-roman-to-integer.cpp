class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for(int i=0; i<s.size(); i++)  
        {  
          if(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M'))
          {
              if(s[i+1]=='D')
                  ans += 400;
              else 
                  ans += 900;
              i++;
          }
          else if(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C'))
          {
              if(s[i+1]=='L')
                  ans += 40;
              else 
                  ans += 90;
              i++;
          }
          else if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X'))
          {
              if(s[i+1]=='V')
                  ans += 4;
              else 
                  ans += 9;
              i++;
          }
          else
          {
              if(s[i]=='I')
                  ans += 1;
              else if(s[i]=='V')
                  ans += 5;
              else if(s[i]=='X')
                  ans += 10;
              else if(s[i]=='L')
                  ans += 50;
              else if(s[i]=='C')
                  ans += 100;
              else if(s[i]=='D')
                  ans += 500;
              else
                  ans += 1000;
          }
        }  
        return ans;
    }
};