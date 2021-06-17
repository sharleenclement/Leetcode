class Solution {
public:
    string interpret(string command) {
        string k;
        int i;
        for(i=0;i<command.length();)
        {
            if(command[i]=='(' && command[i+1]==')')
            {
                k += 'o';
                i+=2;
            }
            else if(command[i]=='(' && command[i+1]=='a')
            {
                k += "al";
                i+=4;
            }
            else
            {
                k += command[i];
                i++;
            }
        }
        return k;
    }
};