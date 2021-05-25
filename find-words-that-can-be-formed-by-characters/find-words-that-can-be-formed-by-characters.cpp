class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int i, arr[123]={0}, j, c=0, k, sum=0;
        bool form = true;
        for(i=0;i<chars.length();++i)
            arr[int(chars[i])]++;
        for(i=0;i<words.size();++i)
        {
            c=0;
            int arr2[123]={0};
            for(j=0;j<words[i].size();++j)
            {
                arr2[int(words[i][j])]++;
            }
            for(k=97;k<=122;k++)
            {
                if(arr[k]<arr2[k])
                {
                    form = false;
                    break;
                }
                else
                    form = true;
            }
            if(form)
                sum+=words[i].size();
        }
        return sum;
    }
};