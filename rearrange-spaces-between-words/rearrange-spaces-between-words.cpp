class Solution {
public:
    string reorderSpaces(string text) {
       int spaces=0;
        int words=0;
        int spacebw;
        int n=text.size();
        int j = 0;
        if(n==1)
            return text;
        char c=' ';
        string final="";
        for(int i=0;i<n;i++)
        {
          if(text[i]==' ')
              spaces++;
        }
        cout << spaces << endl;
        for(int i=0;i<n;i++)
        {
            if(isalpha(text[i]))
            {
                while(isalpha(text[i]))
                    i++;
                words++;
            }
        }
        cout << words << endl;
        if(words==1)
        {
            for(int i=0;i<n;i++)
            {
                while(isalpha(text[i]))
                {
                   final+=text[i];
                    i++;
                }
            }
            while(j<spaces)
            {
               final+=c; 
               j++;
            }
            return final;
        }
        spacebw=spaces/(words-1);
        cout << spacebw << endl;
        for(int i=0;i<n;i++)
        {
            if(isalpha(text[i]))
            {
                j=0;
                while(isalpha(text[i]))
                {
                   final+=text[i];
                    i++;
                }
            
                while(j<spacebw && spaces>0)
                {
                   final+=c; 
                    j++;
                    spaces--;
                }
            }
                // cout << final << " " << spacebw <<  " " << spaces << endl;
        }
        j = 0;
        while(j<spacebw && spaces>0)
        {
           final+=c; 
            j++;
            spaces--;
        }
        return final;
    }
};